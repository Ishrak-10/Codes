#include<iostream>
using namespace std;
class Person{
private:
    string name;
    int age;
public:
    Person(string personName, int personAge)
    {
        name=personName;
        age=personAge;
    }
    void displayInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main()
{
    Person person1("Neymar",32);
    person1.displayInfo();
}
