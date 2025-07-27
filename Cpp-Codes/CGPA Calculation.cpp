#include<iostream>
using namespace std;
int main(){
float phy,eng,math,ip;
cout<<"Enter your physics GPA: ";
cin>>phy;
cout<<"Enter your english GPA: ";
cin>>eng;
cout<<"Enter your math GPA: ";
cin>>math;
cout<<"Enter your ip GPA: ";
cin>>ip;

float cgpa=((phy*3)+(eng*3)+(math*3)+(ip*3))/12;
cout<<"Your CGPA is: "<<cgpa;
}
