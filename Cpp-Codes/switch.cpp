#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter your age: ";
cin>>a;

switch(a)
{
 case 1:
    cout<<"hala madrid";
    break;
case 2:
    cout<<"Two";
    continue;
case 3:
    cout<<"Three";
    break;
default:
    cout<<"default";
}
}
