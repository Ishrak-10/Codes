#include<iostream>
using namespace std;
int main() {
float n,c,f;
cout<<"Choose conversion type"<<endl;
cout<<"1. Celsius to Fahrenheit   2. Fahrenheit to Celsius"<<endl;
cout<<"Input Your Choice: ";
cin>>n;
if(n==1)
{
    cout<<"Enter Celsius: ";
    cin>>c;
    f=(c/5)*9+32;
    cout<<"Fahrenheit: "<<f;
}
else if(n==2)
{
   cout<<"Enter Fahrenheit: ";
    cin>>f;
    c=((f-32)/9)*5;
    cout<<"Celsius: "<<c;
}

return 0;
}
