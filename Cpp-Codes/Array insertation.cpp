#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {2,3,5,6,7};
    int i,n=5;

    /* insert value 8 at the end of the array */
    arr[n++] = 8;

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    /* insert value 1 at the beginning of array*/
    for(i=n; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = 1;
    n++;

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    /* insert value 4 in the middle (index 3) of the array*/
    for(i=n; i>3; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[3] = 4;
    n++;

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

