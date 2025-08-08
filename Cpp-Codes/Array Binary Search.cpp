#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target)
{
     int start = 0;
     int ending = n;
     while(start<=ending)
    {
        int mid = (start+ending)/2;

        if(arr[mid]==target)
        {
          return mid;
        }
        else if(arr[mid]>target)
        {
            ending = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;

    cout<<"Enter a Value For Search: ";
    cin>>target;

    int result = BinarySearch(arr,n,target);

    if(result != -1)
    {
        cout<<target<<" Found at "<<result<<"th index";
    }
    else
    {
       cout<<"Not Found";
    }

    return 0;
}


