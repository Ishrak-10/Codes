#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n,i;
    int flag = 0;

    cout<<"Enter the searching value: ";
    cin>>n;

    for(i=0; i<10; i++)
    {
        if(n == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout<<n<<" found in "<<i<<"th array index";
    }
    else
    {
        cout<<"Not Found";
    }

    return 0;
}
