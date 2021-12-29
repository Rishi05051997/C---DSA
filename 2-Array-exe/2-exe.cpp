#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    cout<<"In function"<<endl;
    arr[3] = 45;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;
    }
};

int main(){

    int marks[] = {1,2,3,4,5,6};

    int n = sizeof(marks)/sizeof(int);
    printArray(marks, n);
    cout<<"In main"<<endl;
    for(int i=0; i<n;i++){
        cout<<marks[i]<<endl;
    }
    
    return 0;
}