#include<iostream>
using namespace std;
class Person{
private:
    string name;
    int age;
public:
    void setName(string newName)
    {
        name=newName;
    }
    string getName()
    {
        return name;
    }
    void setAge(int newAge)
    {
        age=newAge;
    }
    int getAge()
    {
        return age;
    }
    void displayInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main()
{
 Person person1;
 person1.setName("Christiano Ronaldo");
 person1.setAge(39);
 person1.displayInfo();

 Person person2;
 person2.setName("Neymar Jr");
 person2.setAge(32);
 person2.displayInfo();
}
