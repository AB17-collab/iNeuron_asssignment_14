#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the values for the array:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int greatestValue = arr[0];
    int secondGreatestValue = arr[1];
    for(int i=0;i<10;i++){
        if(arr[i]>greatestValue){
            secondGreatestValue = greatestValue;
            greatestValue = arr[i];
        }
    }
    cout<<"The second greatest value in the array is:"<<secondGreatestValue;
    return 0;
}