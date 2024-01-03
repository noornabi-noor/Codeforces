#include<bits/stdc++.h>
using namespace std;

class BsCstu{
    private:
        string Sname;
        int roll;
        string session;
        static int Tstu;
        static BsCstu stu[10];
    public:
        BsCstu(){
            string Sname="";
            int roll=0;
            string session="";
        }

        void addStuInfo(string name,int r,string s){
            Sname=name;
            roll=r;
            session=s;
            Tstu++;
            stu[Tstu-1]=*this;
        }

        static int displayTstu(){
            return Tstu;
        }

        void deleteStu(int r){
            int ind=-1;
            for(int i=0;i<Tstu;i++){
                if(stu[i].roll==r){
                    ind=i;
                    break;
                }
            }
            if(ind!=-1){
                for(int i=0;i<Tstu-1;i++){
                    stu[i]=stu[i+1];
                }
                Tstu--;
                cout<<"Stdent delete successfully\n";
            }
            else{
                cout<<"Invalid roll\n";
            }

        }

        static void display(){
            for(int i=0;i<Tstu;i++){
                cout<<"Student name: "<<stu[i].Sname<<"\n";
                cout<<"Student roll: "<<stu[i].roll<<"\n";
                cout<<"Student session: "<<stu[i].session<<"\n";
                cout << "-----------------------------" << endl;
            }
        }
};

int BsCstu::Tstu = 0;
BsCstu BsCstu::stu[10];

int main(){
    BsCstu student;

    int choice;
    while(true){
        cout<<"Menu : \n";
        cout << "1. Add Student" << endl;
        cout << "2. Delete Student" << endl;
        cout << "3. Display Total Students" << endl;
        cout << "4. Display All Student Information" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:{
                string name,session;
                int roll;
                cout<<"Enter stu name:";
                cin>>name;
                cout<<"Enter stu roll:";
                cin>>roll;
                cout<<"Enter stu session:";
                cin>>session;
                student.addStuInfo(name,roll,session);
                break;
            }
            case 2:{
                int r;
                cout<<"Enter roll which want to delete?: ";
                cin>>r;
                student.deleteStu(r);
                break;
            }
            case 3:{
                cout<<" Total student: "<<student.displayTstu()<<"\n";
                break;
            }
            case 4:{
                cout << "All Student Information:" << endl;
                student.display();
                break;
            }
            case 5:{
                cout<<"Exiting program\n";
                exit(0);
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}