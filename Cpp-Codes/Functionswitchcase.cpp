#include<iostream>
using namespace std;
void add(int a, int b)
{
    cout<<"Addition: "<<a+b;
}
void deduct(int a, int b)
{
    cout<<"Deduction: "<<a-b;
}
void multiply(int a, int b)
{
    cout<<"Multiplication: "<<a*b;
}
void divide(int a, int b)
{
    cout<<"Divide: "<<a/b;
}
int main(){
    int a,b,n;
cout<<"Enter your 1st value: ";
cin>>a;
cout<<"Enter your 2nd value: ";
cin>>b;
cout<<"Enter your sign 1.+  2.-  3.*  4./:  ";
cin>>n;
switch(n)
{
case 1:
    add(a,b);
    break;
case 2:
    deduct(a,b);
    break;
case 3:
    multiply(a,b);
    break;
case 4:
    divide(a,b);
    break;
}
}
