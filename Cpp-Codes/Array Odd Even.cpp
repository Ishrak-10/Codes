#include<iostream>
using namespace std;

int main()
{
    int a[8];
    int even[8];
    int odd[8];
    int od = 0, ev = 0;

    cout<<"Enter Your Values: "<<endl;
    for(int i=0; i<8; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<8; i++)
    {
        if(a[i] % 2 == 0)
        {
            even[ev] = a[i];
            ev++;
        }
        else
        {
            odd[od] = a[i];
            od++;
        }
    }

    cout<<"Even Numbers: ";
    for(int i=0; i<ev; i++)
    {
        cout<<even[i]<<" ";
    }

    cout<<endl;
    cout<<"Odd Numbers: ";
    for(int i=0; i<od; i++)
    {
        cout<<odd[i]<<" ";
    }

    return 0;
}
