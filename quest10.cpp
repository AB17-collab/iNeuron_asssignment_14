#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    int copy[n];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements in the original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int j=0;j<n;j++){
        copy[j] = arr[j];
    }
    cout<<"Elements in the copied array: ";
    for(int i=0;i<n;i++){
        cout<<copy[i]<<" ";
    }
    return 0;
}