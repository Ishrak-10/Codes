#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the number of array: ";
cin>>n;
int num[n];
for(int i=0; i<n; i++)
{
    cout<<"Enter your Number["<<i+1<<"]: ";
    cin>>num[i];
}
int maximum=num[0];
int minimum=num[0];

for(int i=0; i<n; i++)
{
    if(num[i]>maximum)
    {
        maximum=num[i];
    }
    else if(num[i]<minimum)
    {
        minimum=num[i];
    }
}
    cout<<"Maximum Number= "<<maximum<<endl;
    cout<<"Minimum Number= "<<minimum;

    return 0;
}
