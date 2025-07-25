#include<iostream>
using namespace std;
class BankAccount
{
private:
    int AccNumber;
    string name;
    int balance;
public:
    BankAccount(int newAnum, string newName, float newBalance)
    {
        AccNumber=newAnum;
        name=newName;
        balance=newBalance;
    }
    void deposit()
    {
        int n;
        cout<<"\nHow much money you want to deposit: ";
        cin>>n;
        balance=balance+n;
        cout<<"After deposit: "<<balance<<endl;
    }
    void withdraw()
    {
        int n;
        cout<<"\nHow much money you want to withdraw: ";
        cin>>n;
        balance=balance-n;
        cout<<"After withdraw: "<<balance<<endl;
    }
    void displayInfo()
    {
        cout<<"\nAccount Number: "<<AccNumber<<endl<<"Name: "<<name<<endl<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    BankAccount member1(24590133,"Ishrak",10000);

for(int i=0; i<10; i++)
{
    cout<<"How can we help you today?\nFor deposit press 1.\nFor withdraw press 2.\nFor Account details press 3.\nFor Exit press 4."<<endl;
    int n;
    cin>>n;
        if(n==1)
            {
                member1.deposit();
            }
        if(n==2)
            {
                member1.withdraw();
            }
        if(n==3)
            {
                member1.displayInfo();
            }
        if(n==4)
            {
                break;
            }
}

return 0;
}
