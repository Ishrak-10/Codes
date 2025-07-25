#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the number of array: ";
cin>>n;
int num[n];
for(int i=0; i<n; i++)
{
    cout<<"Enter the value["<<i+1<<"]: ";
    cin>>num[i];
}
cout<<"Reverse array"<<endl;
for(int i=n-1; i>=0; i--)
{
   cout<<"Array["<<i+1<<"]: "<<num[i]<<endl;
}
return 0;
}
