#include <iostream>
using namespace std;
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int totalSum = arraySum(arr, n);
    cout << "The sum of the elements in the array is: " << totalSum << endl;

    return 0;
}
