#include <iostream>
using namespace std;
class Rectangle{
private:
    double length;
    double width;
public:
    void setdimesions(double l,double w){
        if(l>0 && w>0){
            length=l;
            width=w;
        }else{
            cout<<"Invalid dimensions"<<endl;
        }
    }
    double calculateArea(){
            return length*width;
        }
    double calculatePerimeter(){
            return 2*(length+width);
        }

    void display(){
        cout<<"length:"<<length<<endl;
        cout<<"Width:"<<width<<endl;
        cout<<"Area: "<< calculateArea()<<endl;
        cout<<"Perimeter:"<<calculatePerimeter()<<endl;
    }
};

int main(){
    Rectangle rec;
    double length,width;
    cout<<"Enter the length of Rectangle:";
    cin>>length;
    cout<<"Enter the width Rectangle:";
    cin>>width;
    rec.setdimesions(length,width);
    rec.display();
}
