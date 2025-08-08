#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a;
    int start = 0;
    int ending = n;
    int result = -1;

    cout<<"Enter a Value For Search: ";
    cin>>a;

    while(start<=ending)
    {
        int mid = (start+ending)/2;

        if(arr[mid]==a)
        {
          result = mid;
          break;
        }
        else if(arr[mid]>a)
        {
            ending = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    if(result != -1)
    {
        cout<<a<<" Found at "<<result<<" index";
    }
    else
    {
       cout<<"Not Found";
    }

    return 0;
}

