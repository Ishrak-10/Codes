#include<iostream>
using namespace std;
int main() {

int x,y,z;
cout<<"Enter the value of x: ";
cin>>x;

cout<<"Enter the value of y: ";
cin>>y;

cout<<"Enter the value of z: ";
cin>>z;

if(x>y && x>z)
{
    cout<<"Largest number is: "<<x;
}
 else if(y>x && y>z)
 {
     cout<<"Largest number is: "<<y;
 }
 else
 {
     cout<<"Largest number is: "<<z;
 }
}

