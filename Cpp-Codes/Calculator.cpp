#include<iostream>
using namespace std;
int main()
{
int a,b;
char op;

cout<<"Type in your expression: ";
cin>>a>>op>>b;

if(op=='+')
{
    cout<<"Answer: "<<a+b;
}
else if(op=='-')
{
    cout<<"Answer: "<<a-b;
}
else if(op=='*')
{
    cout<<"Answer: "<<a*b;
}
else if(op=='/')
{
    cout<<"Answer: "<<a/b;
}
}
