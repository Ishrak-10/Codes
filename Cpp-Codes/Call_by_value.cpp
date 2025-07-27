#include<iostream>
using namespace std;

void call_by_value(int a, int b) {
    cout<<"Inside call by value a= "<<a<<" before replacing"<<endl;
    cout<<"Inside call by value b= "<<b<<" before replacing"<<endl;
    int c=a;
    a=b;
    b=c;
    cout<<"Inside call by value a= "<<a<<" after replacing"<<endl;
    cout<<"Inside call by value b= "<<b<<" after replacing"<<endl;
}
int main() {
    int a=10;
    int b=20;
    cout<<"a= "<<a<<" before function call by value"<<endl;
    cout<<"b= "<<b<<" before function call by value"<<endl;
    call_by_value(a,b);
    cout<<"a= "<<a<<" after function call by value"<<endl;
    cout<<"b= "<<b<<" after function call by value"<<endl;

    return 0;
}
