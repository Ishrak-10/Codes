#include<iostream>
using namespace std;
int main(){
int intnum[4];
float flonum[4];
float sum[4];
float product[4];

for(int i=0; i<4; i++)
{
    cout<<"Enter integer number["<<i<<"]: ";
    cin>>intnum[i];
}
for(int i=0; i<4; i++)
{
    cout<<"Enter float number["<<i<<"]: ";
    cin>>flonum[i];
}
for(int i=0; i<4; i++)
{
    sum[i]=intnum[i]+flonum[i];
    product[i]=intnum[i]*flonum[i];
}
for(int i=0; i<4; i++)
{
    cout<<"Sum["<<i<<"]: "<<sum[i]<<endl;
    cout<<"product["<<i<<"]: "<<product[i]<<endl;
}

}
