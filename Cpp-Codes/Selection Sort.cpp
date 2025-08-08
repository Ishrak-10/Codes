#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIndexValue = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minIndexValue])
            {
                minIndexValue = j;
            }
        }
        int temp = arr[minIndexValue];
        arr[minIndexValue] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {5,7,2,4,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    SelectionSort(arr,n);

    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}


