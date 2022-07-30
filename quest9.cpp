#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements prior to reversal are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int j=0;j<=n/2;j++){
        int temp = arr[j];
        arr[j] = arr[n-1-j];
        arr[n-1-j] = temp;
    }
    cout<<"The elements after reversal are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}