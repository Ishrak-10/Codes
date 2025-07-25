#include <iostream>
using namespace std;
int main() {
    int numbers[5];


    for (int i = 0; i < 5; i++)
    {
        cout << "Enter integers["<<i<<"]: ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            numbers[i] = 0;
        } else {
            numbers[i] = 1;
        }
    }

    cout << "Modified array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i];
    }
}
