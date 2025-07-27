#include<iostream>
using namespace std;
int main(){
int mark[5];
int result;
for(int i=0; i<5; i++)
{
    cout<<"Enter Your Mark["<<i<<"]:" ;
    cin>>mark[i];
}
for(int i=0; i<5; i++)
{
    result+=mark[i];
}
 result=result/5;

cout<<"Average  mark is: "<<result<<endl;

if(result>=80)
{
    cout<<"Excellent";
}
else if(result>=70 && result<80)
{
    cout<<"Good";
}
else if(result>=60 && result<70)
{
    cout<<"Need to improve";
}
else if(result>=50 && result<60)
{
    cout<<"Poor";
}
else
{
    cout<<"Fail";
}

return 0;
}
