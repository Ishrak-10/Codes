#include<iostream>
using namespace std;
int main()
{
int i;
int a;

cout<<"Enter a number for table: ";
cin>>a;
cout<<"Multiplication Table for: "<<a<<endl;

for(i=1; i<=10; i++)
{
    cout<<a<<"x"<<i<<"="<<a*i<<endl;
}
}
