#include <iostream>
using namespace std;
struct Complex {
    double real;
    double imaginary;
};
Complex addComplex(Complex& c1, Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
Complex subtractComplex(Complex& c1, Complex& c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    return result;
}
void displayComplex(const Complex& c) {
    cout << c.real;
    if (c.imaginary >= 0) {
        cout << " + " << c.imaginary << "i" << endl;
    } else {
        cout << " - " << -c.imaginary << "i" << endl;
    }
}
int main() {
    Complex c1, c2, sum, difference;
    cout << "Enter first complex number: ";
    cin >> c1.real >> c1.imaginary;
    cout << "Enter second complex number: ";
    cin >> c2.real >> c2.imaginary;
    sum = addComplex(c1, c2);
    difference = subtractComplex(c1, c2);
    cout << "The sum of the two complex numbers is: ";
    displayComplex(sum);
    cout << "The difference of the two complex numbers is: ";
    displayComplex(difference);
}

