#include<iostream>
using namespace std;

struct Point
{
    int x;
    int y;

    void PrintPoint()
    {
        cout<<"Point: ("<<x<<","<<y<<")"<<endl;
    }
}p2,p3;

int main()
{
    struct Point p1;
    p1.x = 3;
    p1.y = 5;
    p1.PrintPoint();
    //cout<<"Point p1: ("<<p1.x<<","<<p1.y<<")"<<endl;

    p2.x = 45;
    p2.y = -100;
    cout<<"Point p2: ("<<p2.x<<","<<p2.y<<")"<<endl;

    p3 = p1;
    cout<<"Point p3: ("<<p3.x<<","<<p3.y<<")"<<endl;
    p3.x++;
    p3.y--;
    cout<<"Point p3: ("<<p3.x<<","<<p3.y<<")"<<endl;
    cout<<"Point p1: ("<<p1.x<<","<<p1.y<<")"<<endl;

    struct Point *ppl;
    ppl = &p2;
    ppl->x++;
    ppl->y = -50;
    ppl->PrintPoint();
    cout<<"Point p2: ("<<p2.x<<","<<p2.y<<")"<<endl; //p2 value changed for pointer

    float *m1;
    int r = 10;
    //m1 = &r;

    void *m2;   // void pointer can access any datatype value
    m2 = &r;

    return 0;
}
