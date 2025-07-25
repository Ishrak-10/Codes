#include<iostream>
using namespace std;
int main() {
int num[4][4];
cout<<"Enter your Matrix value: "<<endl;
for(int i=0; i<4; i++)
{
    for(int j=0; j<4; j++)
    {
        cin>>num[i][j];
    }
}
cout<<"Matrix: "<<endl;
for(int i=0; i<4; i++)
{
    for(int j=0; j<4; j++)
    {
        cout<<num[i][j]<<"  ";
    }cout<<endl;
}
cout<<"Transpose Matrix :"<<endl;
for(int i=0; i<4; i++)
{
    for(int j=0; j<4; j++)
    {
        cout<<num[j][i]<<"  ";
    }cout<<endl;
}
}
