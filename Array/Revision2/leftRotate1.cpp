/* 
author: gulshan yadav
date: 04-May-2021
*/
#include<iostream>
using namespace std;

void leftRotate1(int arr[], int num){
    int temp = arr[0]; 
    int i; 
    for(i = 1; i< num; i++){
        arr[i-1] = arr[i];

    }
    arr[i-1] = temp; 

    for(int i = 0; i< num; i++){
        cout << arr[i] << " ";
    }
    
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 

    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    leftRotate1(arr, num); 
    return 0; 
}