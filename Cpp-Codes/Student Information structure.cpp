#include <iostream>
using namespace std;
struct Student
{
    string name;
    int roll;
    int mark[3];

void getInfo()
{
    cout<<"Name: ";
    cin>>name;
    cout<<"Roll: ";
    cin>>roll;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the Mark in subject ["<<i+1<<"]: ";
        cin>>mark[i];
    }
}
void displayInfo()
{
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll Number: "<<roll<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Mark in subject ["<<i+1<<"]: "<<mark[i]<<endl;
    }
}
};
int main()
{
    Student student1;
    student1.getInfo();
    student1.displayInfo();

    Student student2;
    student2.getInfo();
    student2.displayInfo();

    Student student3;
    student3.getInfo();
    student3.displayInfo();

    Student student4;
    student4.getInfo();
    student4.displayInfo();

    Student student5;
    student5.getInfo();
    student5.displayInfo();

    return 0;
}
