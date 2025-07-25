#include<iostream>
using namespace std;
int main(){
string name[3];
int id[3];

for(int i=0; i<3; i++)
{
     cout<<"Enter your name["<<i<<"]: ";
     cin>>name[i];
     cout<<"Enter your Id: ";
     cin>>id[i];
}
for(int i=0; i<3; i++)
{
    cout<<"Entered name: "<<name[i]<<endl;
    cout<<"Entered id: "<<id[i]<<endl;


}
}
