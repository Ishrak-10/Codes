#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {33,66,22,99,77,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    InsertionSort(arr,n);

    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
