/* You have to make a cypher for a given password of 8 character. At first take the password letters as input and store them
in char array. Now print the password but if the given alphabet is capital then it will show small letter and for small letter
it will show capital.
Sample Input: PawqTEsT
Sample Output: pAWQteSt */

#include<iostream>
using namespace std;

int main()
{
    char Password[8];
    cout<<"Enter 8 character Password: ";
    cin>>Password;


    cout<<"Input: ";
    for(int i=0; i<8; i++)
    {
        cout<<Password[i];
    }
    cout<<endl<<"Output: ";

    for(int i=0; i<8; i++)
    {
        if(Password[i]>='A' && Password[i]<='Z')
        {
            cout<<char(Password[i] + 32);
        }
        else if(Password[i]>='a' && Password[i]<='z')
        {
            cout<<char(Password[i] - 32);
        }
    }

    return 0;
}

