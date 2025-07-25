#include <iostream>
using namespace std;
int main()
{
    float c, pre;
    cout<<"classes: ";
    cin>>c;
    cout<<"present: ";
    cin>>pre;
    float att;
    att = (pre/c)*100;
    cout<<"Attendance: "<<att<<endl;
    if(att==100)
    {
        cout<<"you will get 2 marks."<<endl;
    }
    else if(att>=80)
    {
        cout<<"Allowed"<<endl;
    }
    else
        {
            cout<<"not allowed"<<endl;
        }
}
