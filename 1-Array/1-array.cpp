#include<iostream>
using namespace std;

int main(){
    int marks[10] = {0};

    int n;
    cout<<"Enter the no of students"<<endl;
    cin>>n;

    /// Assign a value
    marks[0] = -1;

    //// input
    for(int i=1;i<=n;i++){
        cin>>marks[i];
        /// update 
        marks[i] = marks[i]*2;
    };

    /// output 
    cout<<"The marks of students are "<<endl;
    for(int i=1;i<=9;i++){
        cout<<marks[i]<<" ,";
    }
    return 0;
}