#include<iostream>
using namespace std;
int main() {
string a;
int b;

cout<<"Username: ";
cin>>a;

cout<<"Password: ";
cin>>b;

if(a=="Ronaldo")
{
    if(b==1234)
    {
        cout<<"Logging in";
    }
    else
    {
        cout<<"Wrong Password";
    }
}
else if(b==1234)
{
    cout<<"Wrong username but password is correct";
}
else
{
    cout<<"Wrong Username";
}
}
