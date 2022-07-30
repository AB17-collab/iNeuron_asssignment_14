#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the values for the array:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int sum = 0;
    cout<<"The average of all values in the array is:";
    for(int i=0;i<10;i++){
        sum += arr[i];
    }
    cout<<(double)sum/10;
    return 0;
}