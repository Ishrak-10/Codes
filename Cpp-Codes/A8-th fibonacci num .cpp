#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Fibonacci number: ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Invalid input"<<endl;
        return 0;
    }
    int a=0, b=1,sum=0;
    if(n==1)
    {
        cout << "The " <<n<< "th Fibonacci number is: "<<a<< endl;
    }
    else if(n==2)
     {
        cout << "The " << n << "th Fibonacci number is: " << b << endl;
     }
    else
    {
        for(int i=2;i<n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        cout << "The " << n << "th Fibonacci number is " << b << endl;
    }

    return 0;
}
