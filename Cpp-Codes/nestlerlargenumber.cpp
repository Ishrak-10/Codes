#include<iostream>
using namespace std;
int main()
{
int a,b,c;

cout<<"a: ";
cin>>a;

cout<<"b: ";
cin>>b;

cout<<"c: ";
cin>>c;

if(a>b)
{
    if(a>c)
    {
        cout<<"Largest number is: "<<a;
    }
    else
    {
        cout<<"Largest number is: "<<c;
    }
}
else if(b>c)
{
    cout<<"Largest number is: "<<b;
}
else
{
    cout<<"Largest number is: "<<c;
}
}
