#include<iostream>
using namespace std;
int main() {
int n,orgvalue, sum=0, lastval;
    cout<<"Enter the value to be checked: ";
    cin>>n;
    orgvalue=n;
    while(n>0)
    {
        lastval=n%10;
        sum=sum+(lastval*lastval*lastval);
        n=n/10;
    }
    if(orgvalue==sum)
    {
        cout<<"Its an armstrong number" ;
    }
    else
    {
        cout<<"Its not an armstrong number";
    }

    return 0;

}
