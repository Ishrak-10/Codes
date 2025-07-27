#include<iostream>
using namespace std;
struct car
{
    string brand;
    string model;
    int year;
};
int main(){
    string brand,model;
    int year;
cout<<"Enter your car brand: ";
cin>>brand;
cout<<"Enter your car model: ";
cin>>model;
cout<<"Enter your car year: ";
cin>>year;

car mycar1;
mycar1.brand=brand;
mycar1.model=model;
mycar1.year=year;

cout<<mycar1.brand<<endl;
cout<<mycar1.model<<endl;
cout<<mycar1.year<<endl;
}
