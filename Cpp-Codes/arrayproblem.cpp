#include<iostream>
using namespace std;
int main()
{
int num[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        if(num[i][j]%2==0)
        {
            continue;
        }
        cout<<num[i][j]<<"  ";
        if(num[i][j]==2)
        {
            break;
        }
    }  cout<<endl;
}
}
