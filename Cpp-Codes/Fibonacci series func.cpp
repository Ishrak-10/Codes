#include <iostream>
using namespace std;
void Fibonacci(int n)
    {
    int a=0, b=1;
    cout << "Fibonacci Sequence:  " <<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<endl;
        int sum = a+b;
        a=b;
        b=sum;
    }
    }
 int main() {
    int n;
    cout << "Enter the number of Fibonacci : ";
    cin >> n;
    Fibonacci(n);
}
