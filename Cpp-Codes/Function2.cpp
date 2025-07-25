#include<iostream>
using namespace std;
int myfunction(int x, int y)
{
    return x+y;
}
int main()
{
 int z= myfunction(5,3);
 cout<<z;
 z= myfunction(10,3);
 cout<<z;
 return 0;
}
