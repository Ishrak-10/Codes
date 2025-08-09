/*Consider, you are working for a movie agency. Provide that movies have name, id, budget and performance
 [which can be of 3 values: hit, average, flop]. Create 7 movie objects and initialize all the data.
a.  Now your task is to sort movies based on budget in descending order and show all their info.
b.  Show most expensive and cheap movies individually.
c.  Find the count of hit, average and flop movies and then only show their names respectively. */

#include<iostream>
using namespace std;

struct Movie
{
    string name;
    int id;
    float budget;
    string performance;

    void ShowDetails()
    {
         cout<<"Movie Name: "<<name<<endl;
         cout<<"Movie Id: "<<id<<endl;
         cout<<"Movie Budget: "<<budget<<endl;
         cout<<"Movie Performance: "<<performance<<endl;
         cout<<"--------------------------"<<endl;
    }
};

void BubbleSort(struct Movie arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j].budget<arr[j+1].budget)
            {
                struct Movie temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    struct Movie M[7];
    M[0] = {"A",01,110,"Average"};
    M[1] = {"B",02,200,"Hit"};
    M[2] = {"C",03,130,"Flop"};
    M[3] = {"D",04,180,"Average"};
    M[4] = {"E",05,150,"Flop"};
    M[5] = {"F",06,140,"Average"};
    M[6] = {"G",07,170,"Hit"};

    int n=7;

    BubbleSort(M,n);

    for(int i=0; i<n; i++)
    {
        M[i].ShowDetails();
    }

    cout<<"Most Expensive Movie: "<<endl;
    M[0].ShowDetails();
    cout<<"Most Cheap Movie: "<<endl;
    M[n-1].ShowDetails();

    int Hitcount=0, Averagecount=0, Flopcount=0;

    cout<<"Hit Movies: ";
    for(int i=0; i<n; i++)
    {
        if(M[i].performance == "Hit")
        {
            cout<<M[i].name<<", ";
            Hitcount++;
        }
    }cout<<endl;

    cout<<"Average Movies: ";
    for(int i=0; i<n; i++)
    {
        if(M[i].performance == "Average")
        {
            cout<<M[i].name<<", ";
            Averagecount++;
        }
    }cout<<endl;

    cout<<"Flop Movies: ";
    for(int i=0; i<n; i++)
    {
        if(M[i].performance == "Flop")
        {
            cout<<M[i].name<<", ";
            Flopcount++;
        }
    }cout<<endl<<endl;

    cout<<"Hit Count: "<<Hitcount<<endl;
    cout<<"Average Count: "<<Averagecount<<endl;
    cout<<"Flop Count: "<<Flopcount<<endl;

    return 0;
}
