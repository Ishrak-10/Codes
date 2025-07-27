/* Create a structure called product. It will have 4 members - Id, name, price, quantity. Create 2 pointer objects and set the
information and show all the information using a function along with total price. Show the product name which has bigger total
price. Then create 4 objects using array and set the information. Sort them in descending order according to price. */
#include<iostream>
using namespace std;

struct Product
{
    int Id;
    string name;
    float price;
    int quantity;

    float TotalPrice()
    {
        return price*quantity;
    }

    void ShowInfo()
    {
        cout<<"Product Id: "<<Id<<endl;
        cout<<"Product Name: "<<name<<endl;
        cout<<"Product Price: "<<price<<" TK"<<endl;
        cout<<"Product Quantity: "<<quantity<<endl;
        cout<<"Product Total Price: "<<TotalPrice()<<" TK"<<endl;
        cout<<"----------------------------"<<endl;
    }
} ;

int main()
{
    Product *p1 = new Product;
    Product *p2 = new Product;

    p1->Id = 1;
    p1->name = "Coca-Cola";
    p1->price = 30.00;
    p1->quantity = 50;
    p1->ShowInfo();

    p2->Id = 2;
    p2->name = "Pepsi";
    p2->price = 25.00;
    p2->quantity = 45;
    p2->ShowInfo();

    cout<<endl;

    if(p1->TotalPrice() > p2->TotalPrice())
    {
        cout<<p1->name<<" has the bigger Total price"<<endl;
    }
    else
    {
        cout<<p2->name<<" has the bigger Total price"<<endl;
    }
    cout<<endl;

    struct Product p[4];

    p[0].Id = 3;
    p[0].name = "Mojo";
    p[0].price = 15.00;
    p[0].quantity = 60;

    p[1].Id = 4;
    p[1].name = "Red Bull";
    p[1].price = 200.00;
    p[1].quantity = 15;

    p[2].Id = 5;
    p[2].name = "Mountain Dew";
    p[2].price = 20.00;
    p[2].quantity = 40;

    p[3].Id = 6;
    p[3].name = "Monster";
    p[3].price = 150.00;
    p[3].quantity = 25;

    int n = 4;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(p[j].price < p[j+1].price)
            {
                struct Product temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
    cout<<endl;
    cout<<"After Sorting in Descending Order: "<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        p[i].ShowInfo();
    }




    return 0;
}
