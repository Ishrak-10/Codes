#include <iostream>
using namespace std;
struct Book
{
    string title;
    string author;
    int price;

    void getInfo()
    {
        cout<<"Book title: ";
        cin>>title;
        cout<<"Book author: ";
        cin>>author;
        cout<<"Book price: ";
        cin>>price;
    }
    void displayInfo()
    {
        if(price>500)
        {
            cout<<"Book title: "<<title<<endl;
            cout<<"Book author: "<<author<<endl;
            cout<<"Book price: "<<price<<endl;
        }
        else
        {
            cout<<"price is not above 500."<<endl;
        }
    }
};
int main()
{
    Book book1;
    book1.getInfo();
    book1.displayInfo();
}
