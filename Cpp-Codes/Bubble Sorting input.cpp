#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter Array size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array values: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int step=0; step<n; step++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
