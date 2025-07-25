#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number for Fibonacci : ";
    cin >> n;
    int a=0, b=1;
    cout << "Fibonacci Sequence:  " <<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<endl;
        int sum = a+b;
        a = b;
        b = sum;
    }
    return 0;
}
