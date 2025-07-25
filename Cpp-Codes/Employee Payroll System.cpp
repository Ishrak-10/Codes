#include <iostream>
using namespace std;
struct Employee
{
    int id;
    string name;
    float salary;

    void getInfo()
    {
        cout<<"Enter Id: ";
        cin>>id;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Salary: ";
        cin>>salary;
    }
    void displayInfo()
    {
        cout<<"Employee Id: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};
int main()
{
    Employee employee1;
    employee1.getInfo();
    employee1.displayInfo();

    Employee employee2;
    employee2.getInfo();
    employee2.displayInfo();

    Employee employee3;
    employee3.getInfo();
    employee3.displayInfo();

    int totalSalary;
    totalSalary=employee1.salary+employee2.salary+employee3.salary;
    cout<<"Total Salary: "<<totalSalary;
}
