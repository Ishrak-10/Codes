/* Mr. Alam has some banknotes in his wallet, which he wants to bring out from there. After bringing out he noticed that he had
 ten banknotes of several values (like 100, 20, 10, 500, 50 etc. taka). There was multiple notes of same values (like two 50-taka
 notes etc.). He used your code to input the ten bank note values. Now i) your code should sort the bank notes in descending order,
 ii)find out total amount of taka, iii) give an amount less than total amount and find out how many note needs to make that value.

Sample Input: 20 10 20 500 100 100 200 50 1000 50
Sample Output:
After Sort: 1000 500 200 100 100 50 50 20 10 10
Total Amount: 2040 taka
Provide an amount less than total: 2000
Total notes needed: 7 which are 1000 500 200 100 100 50 50  */

#include<iostream>
using namespace std;

int main()
{
    int taka[10];
    int n =10;
    cout<<"Enter Your Notes: ";
    for(int i=0; i<n; i++)
    {
        cin>>taka[i];
    }
    cout<<"Input     : ";
    for(int i=0; i<n; i++)
    {
        cout<<taka[i]<<" ";
    }cout<<endl;

    cout<<"After Sort: ";
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(taka[j]<taka[j+1])
            {
                int temp = taka[j];
                taka[j] = taka[j+1];
                taka[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<taka[i]<<" ";
    }cout<<endl;

    int total=0;
    for(int i=0; i<n; i++)
    {
        total+=taka[i];
    }
    cout<<"Total Amount: "<<total<<" taka"<<endl;

    int Count = 0;
    int sum = 0;
    int target;

    cout<<"Provide an amount less than total: ";
    cin>>target;
    if (target >= total)
    {
        cout<<"Amount must be less than total."<<endl;
    }

    cout<<"Notes Used: ";
    for(int i=0; i<n; i++)
    {
        if(sum+taka[i] <= target)
        {
            sum+=taka[i];
            cout<<taka[i]<<" ";
            Count++;
        }
    }cout<<endl;
    cout<<"Total Notes needed: "<<Count;

    return 0;
}

