#include<iostream>
using namespace std;

int tax(int cost)
{
    return cost+(cost*0.1);
}
int EV(int total)
{
    return total-(total*(0.05));
}
int main()
{
    int cost,n,total;
    cout<<"Enter Your cost: ";
    cin>>cost;
    cout<<"Your total cost after 10% vat= "<<tax(cost)<<endl;
    total=tax(cost);
    cout<<"Are you a EV User?  1.Yes  2.No: ";
    cin>>n;
    if(n==1)
    {
        cout<<"Your final cost after 5% deduct= "<<EV(total);
    }
    else
    {
        cout<<"No discount available. Thank you";
    }
}
