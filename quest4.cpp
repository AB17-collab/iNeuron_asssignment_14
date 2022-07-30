#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the values for the array:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int greatestValue = INT32_MIN;
    for(int i=0;i<10;i++){
        greatestValue = max(greatestValue,arr[i]);
    }
    cout<<"The greatest value in the array is:"<<greatestValue;
    return 0;
}