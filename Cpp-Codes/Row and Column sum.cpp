#include <iostream>
using namespace std;
int main()
{
    int num[5][5];
    cout<<"Enter your value of array: "<<endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>num[i][j];
        }
    }
    cout<<"The matrix: "<<endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<num[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0; i<5; i++){
        int rowsum=0;
        for(int j=0; j<5; j++){
            rowsum+=num[i][j];
        }cout<<"Rowsum["<<i+1<<"]: "<<rowsum<<endl;
    }
    for(int j=0; j<5; j++){
        int columnsum=0;
        for(int i=0; i<5; i++){
            columnsum+=num[i][j];
        }
        cout<<"Column sum["<<j+1<<"]: "<<columnsum<<endl;
    }
}
