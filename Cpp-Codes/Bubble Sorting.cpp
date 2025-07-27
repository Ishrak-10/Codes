#include<iostream>
using namespace std;

int main()
{
    int ax[5] = {25,6,88,-100,38};
    int n = 5;

    cout<<"Before Sorting: ";
    for(int i=0; i<5; i++)
    {
        cout<<ax[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(ax[j] > ax[j+1])
            {
                int temp = ax[j];
                ax[j] = ax[j+1];
                ax[j+1] = temp;
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
