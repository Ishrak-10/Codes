#include<iostream>
using namespace std;

int main()
{
    int ax[5] = {25,6,88,-100,38};

    cout<<"Before Sorting: ";
    for(int i=0; i<5; i++)
    {
        cout<<ax[i]<<" ";
    }
    cout<<endl;

    for(int step=0; step<5; step++)
    {
        for(int i=0; i<4; i++)
        {
            if(ax[i] > ax[i+1])
            {
                int temp = ax[i];
                ax[i] = ax[i+1];
                ax[i+1] = temp;
            }
        }
    }

    cout<<"After Sorting: ";
    for(int i=0; i<5; i++)
    {
        cout<<ax[i]<<" ";
    }

    return 0;
}
