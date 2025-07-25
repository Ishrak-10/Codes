#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int numTests;
    cout << "Enter the number of test cases: ";
    cin >> numTests;

    while (numTests--) {
        int num;
        cout << "Enter a number to check: ";
        cin >> num;

        if (isPrime(num))
            cout << num << " is a prime number.\n";
        else
            cout << num << " is not a prime number.\n";
    }
}

