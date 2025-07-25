#include<iostream>
using namespace std;
int main() {
int num1[3][3];
int num2[3][3];
int add[3][3];
int sub[3][3];
cout<<"Enter your 1st Matrix value: "<<endl;
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        cin>>num1[i][j];
    }
}
cout<<"Enter your 2nd Matrix value: "<<endl;
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        cin>>num2[i][j];
    }
}
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        add[i][j]=num1[i][j]+num2[i][j];
    }
}
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        sub[i][j]=num1[i][j]-num2[i][j];
    }
}
cout<<"Addition Matrix"<<endl;
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        cout<<add[i][j]<<"   ";
    }cout<<endl;
}
cout<<"Subtraction Matrix"<<endl;
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        cout<<sub[i][j]<<"  ";
    }cout<<endl;
}
}
