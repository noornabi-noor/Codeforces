#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BOOK {
    string title;
    string author;
    string publisher;
    int isbn;
    int book_num;

public:
    void insert_book_info();
    void display_book() const;
    bool match_isbn(int target_isbn) const;
    void modify_book();
};

void BOOK::insert_book_info() {
    cout << "Enter Title of the book: ";
    cin.ignore();
    getline(cin, title);

    cout << "Enter Author name: ";
    getline(cin, author);

    cout << "Enter Publisher of the book: ";
    getline(cin, publisher);

    cout << "Enter ISBN number of the book: ";
    cin >> isbn;

    cout << "Enter number of books: ";
    cin >> book_num;
}

void BOOK::display_book() const {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Number of books available: " << book_num << endl;
}

bool BOOK::match_isbn(int target_isbn) const {
    return isbn == target_isbn;
}

void BOOK::modify_book() {
    cout << "Modifying Book Information" << endl;

    cout << "Enter new Title of the book (or leave empty to keep the existing title): ";
    cin.ignore();
    string new_title;
    getline(cin, new_title);
    if (!new_title.empty()) {
        title = new_title;
    }

    cout << "Enter new Author name (or leave empty to keep the existing author): ";
    string new_author;
    getline(cin, new_author);
    if (!new_author.empty()) {
        author = new_author;
    }

    cout << "Enter new Publisher of the book (or leave empty to keep the existing publisher): ";
    string new_publisher;
    getline(cin, new_publisher);
    if (!new_publisher.empty()) {
        publisher = new_publisher;
    }

    cout << "Enter new ISBN number of the book (or enter 0 to keep the existing ISBN): ";
    int new_isbn;
    cin >> new_isbn;
    if (new_isbn != 0) {
        isbn = new_isbn;
    }

    cout << "Enter new number of books (or enter 0 to keep the existing quantity): ";
    int new_book_num;
    cin >> new_book_num;
    if (new_book_num != 0) {
        book_num = new_book_num;
    }

    cout << "Book information modified." << endl;
}

int main() {
    vector<BOOK> library; 

    while (true) {
        cout << "Library Management System" << endl;
        cout << "1. Insert Book Information" << endl;
        cout << "2. Modify Book Information" << endl;
        cout << "3. Display All Book Information" << endl;
        cout << "4. Display Book Information by ISBN" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    BOOK book;
                    book.insert_book_info();
                    library.push_back(book);
                    cout << "Book information added to the library." << endl;
                }
                break;
            case 2:
                {
                    cout << "Enter ISBN to modify book information: ";
                    int isbn_to_modify;
                    cin >> isbn_to_modify;

                    bool found = false;
                    for (BOOK& book : library) {
                        if (book.match_isbn(isbn_to_modify)) {
                            book.modify_book();
                            cout << "Book information modified." << endl;
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        cout << "Book with ISBN " << isbn_to_modify << " not found." << endl;
                    }
                }
                break;
            case 3:
                {
                    cout << "Displaying All Book Information" << endl;
                    for (const BOOK& book : library) {
                        cout << "-------------------------------------" << endl;
                        book.display_book();
                    }
                }
                break;
            case 4:
                {
                    cout << "Enter ISBN to display book information: ";
                    int isbn_to_display;
                    cin >> isbn_to_display;

                    bool found = false;
                    for (const BOOK& book : library) {
                        if (book.match_isbn(isbn_to_display)) {
                            cout << "Displaying Book Information" << endl;
                            book.display_book();
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        cout << "Book with ISBN " << isbn_to_display << " not found." << endl;
                    }
                }
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}