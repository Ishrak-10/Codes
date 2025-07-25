#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n: ";
    cin>>n;
    int arr[n],sum=0;
    for(int i=0; i<n; i++)
    {
        cout<<"arr: ["<<i<<"]: ";
        cin>>arr[i];
    }
    for(int i=1; i<n; i+=2)
    {
      sum+=arr[i];
    }
    cout<<"sum: "<<sum<<endl;

if(sum%2==0)
{
    cout<<"even";
}
else
{
    cout<<"odd";
}
}
