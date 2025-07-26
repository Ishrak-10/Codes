#include<iostream>
using namespace std;

int main()
{
    int *ptr1;
    int m = 100;
    ptr1 = &m;

    cout<<ptr1<<endl<<*ptr1<<endl;

    (*ptr1)++;     // Increasing value of m using pointer
    cout<<ptr1<<endl<<*ptr1<<endl;

    *ptr1++;       // Going to next address(memory block)
    cout<<ptr1<<endl<<*ptr1<<endl;

    return 0;
}
