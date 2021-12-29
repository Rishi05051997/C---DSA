#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    cout<<"In function "<<sizeof(arr)<<endl;
    // int n = sizeof(arr)/sizeof(int);
    arr[0] = 25;
    cout<<"In function "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    };
    cout<<"*********"<<endl;
};

int main(){
    
    int arr[] = {1,2,3,4,5,6};
    /// below we are finding how manny elements are there in an array
    int n = sizeof(arr)/sizeof(int);

    printArray(arr, n);
    
    cout<<"In main "<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    };
    return 0;
}