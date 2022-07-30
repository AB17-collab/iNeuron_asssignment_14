#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the values for the array:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int smallestValue = INT32_MAX;
    for(int i=0;i<10;i++){
        smallestValue = min(smallestValue,arr[i]);
    }
    cout<<"The smallest value in the array is:"<<smallestValue;
    return 0;
}