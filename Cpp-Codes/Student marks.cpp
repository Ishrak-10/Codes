#include<iostream>
using namespace std;
int main(){
int x;

cout<<"enter the number of stuents:";
cin>>x;

string name[x];
int marks[x];
for(int i=0; i<x; i++){
 cout<<"enter the name of student["<<(i+1)<<"]";
 cin>>name[i] ;
 cout<<"enter the marks of student["<<(i+1)<<"]";
 cin>>marks[i];
}
 int totalmarks;
 int avgmarks;
 int highestmarks=marks[0];
 int lowestmarks=marks[0];
for(int i=0; i<x;i++){
 totalmarks+=marks[i];
 if(marks[i]>highestmarks)
   {
       highestmarks=marks[i];
   }
if(marks[i]<lowestmarks)
   {
       lowestmarks=marks[i];
   }
}
avgmarks=totalmarks/x;

cout<<"Highest Marks: " << highestmarks << endl;
cout << "Lowest Marks: " << lowestmarks << endl;
cout << "Total Marks: " << totalmarks << endl;
cout << "Average Marks: " << avgmarks << endl;
}
