#include<iostream>
using namespace std;
int main() {
int a,b;
cout<<"Enter Row: ";
cin>>a;
cout<<"Enter Column: ";
cin>>b;
int num[a][b];
cout<<"Enter Your Numbers: "<<endl;
for(int i=0; i<a; i++)
{
    for(int j=0; j<b; j++)
    {
        cin>>num[i][j];
    }
}
for(int i=0; i<a; i++)
{
    for(int j=0; j<b; j++)
    {
        cout<<num[i][j]<<"   ";
    }   cout<<endl;
}
    return 0;
}
