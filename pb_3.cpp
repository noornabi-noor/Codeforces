#include<bits/stdc++.h>
using namespace std;

const int maxsize = 10;
int siz = 3;

class bankAccount{
    public:
        string depositorN;
        string AcN;
        string Atype;
        double balance;
        const double minBalance = 100.0;
    public:
        void initialize(string name,string aNum,string type,double bl);
        void deposit(double ammount);
        void withdraw(double ammount);
        void display();
};
void bankAccount::initialize(string name,string aNum,string type,double bl){
    depositorN=name;
    AcN=aNum;
    Atype=type;
    balance=bl;
}
void bankAccount::deposit(double ammount){
    balance+=ammount;
}
void bankAccount::withdraw(double ammount){
    if(balance-ammount>=minBalance){
        balance-=ammount;
        cout<<"Withdraw balance is : "<<ammount<<"\n";
    }
    else{
        cout << "Insufficient balance for withdrawal. Minimum balance requirement: " << minBalance << "Tk" << endl;
    }
}
void bankAccount::display(){
    cout<<"Depositor name: "<<depositorN<<"\n";
    cout<<"Account number: "<<AcN<<"\n";
    cout<<"Account type: "<<Atype<<"\n";
    cout<<"Balance : "<<balance<<"\n";
}

int main(){
    bankAccount account[maxsize];

    account[0].initialize("Customer 1","Acc1","Saving",1000.00);
    account[1].initialize("Customer 2","Acc2","Student",2000.00);
    account[2].initialize("Customer 3","Acc3","Saving",15000.00);

    int choice;
    while(true){
        cout<<"Account menu: "<<"\n";
        cout<<"1.  Insert info \n";
        cout<<"2.  Deposit \n";
        cout<<"3.  Withdraw  \n";
        cout<<"4.  Display info \n";
        cout<<"5.  Exit \n";
        cout<<"Enter your choice: \n";
        cin>>choice;
        switch(choice){
            case 1:{
                if(siz<maxsize){
                    string n,an,t;
                    double b;
                    cout<<"Enter depositor name: ";
                    cin>>n;
                    cout<<"Enter depositor AccN: ";
                    cin>>an;
                    cout<<"Enter AccType: ";
                    cin>>t;
                    cout<<"Enter balance: ";
                    cin>>b;
                    siz++;
                    account[siz-1].initialize(n,an,t,b);
                    cout<<"INfo is inserted\n";
                }
                else{
                    cout<<"Account reached limit\n";
                }
                break;
            }

            case 2:{
                string acN;
                cout<<"Enter AcN: ";
                cin>>acN;
                bool f=false;
                for(int i=0;i<siz;i++){
                    if(account[i].AcN==acN){
                        f=true;
                        double bance;
                        cout<<"Enter ammount: ";
                        cin>>bance;
                        account[i].deposit(bance);
                        cout<<"Successfully deposit\n";
                        break;
                    }
                }
                if(!f){
                    cout<<"Invalid\n";
                }
                break;
            }

            case 3:{
                string acN;
                cout<<"Enter AcN: ";
                cin>>acN;
                bool f=false;
                for(int i=0;i<siz;i++){
                    if(account[i].AcN==acN){
                        f=true;
                        double bance;
                        cout<<"Enter ammount: ";
                        cin>>bance;
                        account[i].withdraw(bance);
                        cout<<"Successfully withdraw\n";
                        break;
                    }
                }
                if(!f){
                    cout<<"Invalid\n";
                }
                break;
            }

            case 4:{
                cout<<"Displayinf info\n";
                for(int i=0;i<siz;i++){
                    account[i].display();
                    cout<<"\n";
                }
                break;
            }
            case 5:{
                return 0;
            }
            default:{
                cout<<"Invalid choice\n";
                break;
            }
        }
    }
    
    return 0;
}