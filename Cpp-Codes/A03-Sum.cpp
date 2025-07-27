#include<iostream>
using namespace std;
int main()
{
int n;
int sum;
cout<<"Enter the Range: ";
cin>>n;
for(int i=0; i<=n; i=i+2)
{
   sum+=i;
}
cout<<"Result: "<<sum;
return 0;
}
