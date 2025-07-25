#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8};
    int i, n=8;

    /* delete last element of the array*/
    n--;

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    /* delete the value 1 from the beginning of the array */
     n--;
     for(i=0; i<n; i++)
     {
         arr[i] = arr[i+1];
     }

     for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    /* delete the value 4 from the middle (index 2) of the array*/
    n--;
    for(i=2; i<n; i++)
    {
        arr[i] = arr[i+1];
    }

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
