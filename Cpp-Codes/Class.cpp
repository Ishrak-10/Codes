#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
};
int main(){
car mycar1;
mycar1.brand="Lamborghini";
mycar1.model="Huracan";
mycar1.year=2012;

cout<<mycar1.brand<<endl;
cout<<mycar1.model<<endl;
cout<<mycar1.year<<endl;
}

