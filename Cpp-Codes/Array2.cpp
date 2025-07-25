#include<iostream>
using namespace std;
int main(){
int num[6];
int even;
int odd;

for(int i=0; i<6; i++)
{
    cout<<"Enter Your Number["<<i<<"]: ";
    cin>>num[i];
}
even = num[0]*num[2]*num[4];
cout<<"Even Product= "<<even<<endl;
if(even%5==0)
{
    cout<<"Even product is divisible by 5"<<endl;
}
else
{
  cout<<"Even product is not divisible by 5"<<endl;
}
odd=num[1]*num[3]*num[5];
cout<<"Odd Product= "<<odd<<endl;
if(odd%5==0)
{
    cout<<"Odd product is divisible by 5"<<endl;
}
else
{
  cout<<"odd product is not divisible by 5";
}

return 0;
}
