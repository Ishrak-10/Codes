#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the number of the participants: ";
cin>>n;
int score[n];
for(int i=0; i<n; i++)
{
    cout<<"Enter the score for participant["<<i+1<<"]: ";
    cin>>score[i];
}
int total;
int high=score[0];
int low=score[0];
float ave;
for(int i=0; i<n; i++)
{
   total+=score[i];
   if(score[i]>high)
   {
       high=score[i];
   }
   else if(score[i]<low)
   {
       low=score[i];
   }
}
ave=total/n;

cout<<"Average score: "<<ave<<endl;
cout<<"Highest score: "<<high<<endl;
cout<<"Lowest score: "<<low<<endl;

}
