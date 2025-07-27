#include<iostream>
using namespace std;

void call_by_ref(int *a, int *b) {
    cout<<"Inside call by ref a= "<<*a<<" before replacing"<<endl;
    cout<<"Inside call by ref b= "<<*b<<" before replacing"<<endl;
    int c=*a;
    *a=*b;
    *b=c;
    cout<<"Inside call by ref a= "<<*a<<" after replacing"<<endl;
    cout<<"Inside call by ref b= "<<*b<<" after replacing"<<endl;
}
int main() {
    int a=10;
    int b=20;
    cout<<"a= "<<a<<" before function call by ref"<<endl;
    cout<<"b= "<<b<<" before function call by ref"<<endl;
    call_by_ref(&a,&b);
    cout<<"a= "<<a<<" after function call by ref"<<endl;
    cout<<"b= "<<b<<" after function call by ref"<<endl;

    return 0;
}
