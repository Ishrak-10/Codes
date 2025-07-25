#include<iostream>
using namespace std;
void myfunction(string name, int age)
{
    cout<<name<<" , "<<age<<" years old"<<endl;
}
int main()
{
    myfunction("Ronaldo",39);
    myfunction("Messi",37);
    myfunction("Neymar",32);
}
