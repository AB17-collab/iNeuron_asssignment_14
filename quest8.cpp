#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the values for the array:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int smallestValue = arr[0];
    int secondSmallestValue = arr[1];
    for(int i=0;i<10;i++){
        if(arr[i]<smallestValue){
            secondSmallestValue = smallestValue;
            smallestValue = arr[i];
        }
    }
    cout<<"The second smallest value in the array is:"<<secondSmallestValue;
    return 0;
}