#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"give the size of the array: ";
    cin>>n;

    if (n<=0)
    {
        cout <<"Size of the array must be a positive !"<< endl;
        return 0;
    }
    int arry[n];
    for (int i=0; i<n; i++)
    {
        cout << "Enter the array number ["<<i<<"]: ";
        cin >> arry[i];
    }
    for (int i=0; i<n; i+=2)
    {
        if(arry[i]>10)
        {
            arry[i]=0;
        }
    }
    cout << "Modified array:" << endl;
    for (int i=0; i<n; i++)
    {
        cout << arry[i] <<endl;
    }
    return 0;
}
