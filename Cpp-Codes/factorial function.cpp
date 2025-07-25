#include<iostream>
using namespace std;
int factorial(int n)
{
    int factorial=1;
    for(int i=1; i<=n; i++)
    {
        factorial*=i;
    }
    cout<<"Factorial of "<<n<<" = "<<factorial;
}
int main() {
int n,result;
cout<<"Enter a non-negative number: ";
cin>>n;
factorial(n);

return 0;
}

