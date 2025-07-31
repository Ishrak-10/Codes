#include<iostream>
using namespace std;

int main()
{
    int a[5] = {5,7,2,4,9};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<"Before Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    for(int i=0; i<n-1; i++)
    {
        int minIndexValue = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[minIndexValue])
            {
                minIndexValue = j;
            }
        }
        int temp = a[minIndexValue];
        a[minIndexValue] = a[i];
        a[i] = temp;
    }

    cout<<endl;
    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
