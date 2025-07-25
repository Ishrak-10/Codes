#include<iostream>
using namespace std;
int main() {

int a,b;

cout<<"username: ";
cin>>a;

cout<<"password: ";
cin>>b;

if(a==0000)
{
    if(b==1234)
    {
        cout<<"Logging in";
    }
    else
    {
        cout<<"Wrong password";
    }
}
else
{
    cout<<"Wrong username";
}
}
