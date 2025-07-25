#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n,i;

    cout<<"Enter the searching value: ";
    cin>>n;

    for(i=0; i<10; i++)
    {
        if(n == arr[i])
        {
            break;
        }
    }
    cout<<n<<" found in "<<i<<"th array index";

    return 0;
}
