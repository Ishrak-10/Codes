#include<iostream>
using namespace std;

int main()
{
    char arr[10] = {'a','j','d','e','h','b','i','c','f','g'};
    int n = 10;

    cout<<"Before Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] < arr[j+1])   // Descending Order
            {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    char a;
    int i;
    int flag = 0;

    cout<<"Enter the Character for searching: ";
    cin>>a;

    for(i=0; i<10; i++)
    {
        if(a == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout<<a<<" found in "<<i<<"th array index";
    }
    else
    {
        cout<<a<<" is not found";
    }

    return 0;
}

