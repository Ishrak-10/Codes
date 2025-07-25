#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
int main() {
int n,result;
cout<<"Enter a non-negetive number: ";
cin>>n;
result=factorial(n);
cout<<"Factorial of "<<n<<" = "<<result;
}
