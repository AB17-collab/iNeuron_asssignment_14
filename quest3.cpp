#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the values for the array:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int sumEven = 0,sumOdd = 0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0)
            sumEven += arr[i];
        else    
            sumOdd += arr[i];
    }
    cout<<"The sum of all even values in the array is:"<<sumEven<<"\n";
    cout<<"The sum of all even values in the array is:"<<sumOdd;
    return 0;
}