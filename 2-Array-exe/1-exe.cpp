#include<iostream>
using namespace std;


int main(){

    int marks[10];

    int n;
    cout<<"Enter the marks of students"<<endl;
    cin>>n;

    /// input 
    for(int i=0;i<n;i++){
        cin>>marks[i];
        //// Give grace marks of +5 to each student 
        marks[i] = marks[i] +  5;
    }
    /// output
    cout<<"The marks of students are ";
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ,";
        
    }
    return 0;
}