#include <iostream>
#include <string>

using namespace std;

const size_t nob {25};

class BooksInfo
{
private:
	string Book_Title;
	string Book_author;
	string Book_publisher;
	int Number_Of_Copies {};
	long ISBN {};
	double price {};
	int Publication_Year {};

public:
	BooksInfo() {}

	BooksInfo(const string& bt, const string& ba, const string& bp, int noc, long ISB, double pr, int py) :
		Book_Title(bt), Book_author(ba), Book_publisher(bp), Number_Of_Copies(noc), ISBN(ISB), price(pr), Publication_Year(py) {}

	BooksInfo(const BooksInfo& BI) : Book_Title(BI.Book_Title), Book_author(BI.Book_author), Book_publisher(BI.Book_publisher),
		Number_Of_Copies(BI.Number_Of_Copies), ISBN(BI.ISBN), price(BI.price), Publication_Year(BI.Publication_Year) {}

	void setBook_Title(const string& BT) { Book_Title = BT; }
	void setBook_author(const string& BA) { Book_author = BA; }
	void setBook_publisher(const string& BP) { 	Book_publisher = BP; }
	void setNumber_Of_Copies(int NOC) { Number_Of_Copies = NOC; }
	void setISBN(int IS) { 	ISBN = IS; }
	void setprice(double pr) { 	price = pr; }
	void setPublication_Year(int PY) { Publication_Year = PY; }

	string getBook_Title() const { 	return Book_Title; }
	string getBook_author() const { return Book_author; }
	string getBook_publisher() const { return Book_publisher; }
	int getNumber_Of_Copies() const { return Number_Of_Copies; }
	int getISBN() const { return ISBN; }
	double getprice() const { return price; }
	int getPublication_Year() const { return Publication_Year; }

	bool operator >= (const BooksInfo& b)
	{
		return Publication_Year >= b.Publication_Year;
	}

	bool operator == (BooksInfo b)
	{
		return Publication_Year == b.Publication_Year;
	}
};

ostream& operator<<(ostream& os, const BooksInfo bi)
{
	if (!bi.getBook_Title().empty()) {
		os << bi.getBook_Title() << '\n';
		os << bi.getBook_author() << '\n';
		os << bi.getBook_publisher() << '\n';
		os << bi.getNumber_Of_Copies() << '\n';
		os << bi.getISBN() << '\n';
		os << bi.getprice() << '\n';
		os << bi.getPublication_Year() << '\n';
	}

	return os;
}

using Books = BooksInfo[nob];

void search(const Books b)
{
	string bt;
	int is {};

	cout << "Please Enter the ISBN of the book you want to search for: ";
	cin >> is;

	cout << "Please Enter the Book title you want to search for: ";
	getline(cin >> ws, bt);

	for (size_t i = 0; i < nob; ++i)
		if ((bt == b[i].getBook_Title()) && (is == b[i].getISBN())) {
			cout << "The book's info you searched for is:\n";
			cout << b[i] << '\n';
			return;
		}

	cout << "Not found\n";
}

void copiesStock(Books b)
{
	string bt;
	int newC {};

	cout << "Enter the book title: ";
	getline(cin >> ws, bt);

	for (size_t i = 0; i < nob; ++i)
		if (bt == b[i].getBook_Title()) {
			cout << "Number of copies in stock: ";
			cout << b[i].getNumber_Of_Copies();

			cout << "\nPlease Set the number of copies in stock: ";
			cin >> newC;

			b[i].setNumber_Of_Copies(newC);

			cout << "\nUpdated the number of copies in stock: " << b[i].getNumber_Of_Copies() << '\n';
			return;
		}

	cout << "Not found\n";
}

void modify(Books b)
{
	// TO BE COMPLETED
}

int main()
{
	Books b {{"Self Assessment in Action", "Betty McDonald", "Common Ground Publishing", 100, 9781863, 1468, 2009},
		{"CAT AND MOUSE", "JAMES PATTERSON", "Little, Brown and Company", 200, 9780755, 57.4, 1997},
		{ "THE DA VINCI CODE", "DAN BROWN", "Transworld & Bantam Books", 300, 780552, 35.5, 2003 }};

	for (bool again {true}; again; ) {
		int  ch {};

		cout << "\nBook Information\n";
		cout << "\n1. search the book by Book Title and by ISBN";
		cout << "\n2. show the number of copies in stock, set the number of copies in stock, update the number of copies in stock";
		cout << "\n3. Modify";
		cout << "\n4. print the information of the books";
		cout << "\n5. compare based on Publication Year";
		cout << "\n6. Exit";
		cout << "\n\nEnter Your Choice: ";
		cin >> ch;

		switch (ch)
		{
			case 1:
				search(b);
				break;

			case 2:
				copiesStock(b);
				break;

			case 3:
				modify(b);
				break;

			case 4:
				for (int i = 0; i < nob; i++)
					if (!b[i].getBook_Title().empty())
						cout << b[i] << '\n';

				break;

			case 5:
				cout << "To do\n";
				break;

			case 6:
				again = false;
				break;

			default:
				cout << "\n wrong choice";
				break;
		}
	}
}