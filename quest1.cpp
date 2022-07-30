#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the values for the array:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int sum = 0;
    cout<<"The sum of all values in the array are:";
    for(int i=0;i<10;i++){
        sum += arr[i];
    }
    cout<<sum;
    return 0;
}