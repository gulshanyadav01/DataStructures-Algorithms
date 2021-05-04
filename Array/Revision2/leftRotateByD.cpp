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

    
}

void leftRotateByD(int arr[], int num, int d ){
    for(int i = 0; i<d; i++){
        leftRotate1(arr, num); 
    }

    // print the array 

    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }

    
}

// reversal algorithm 

void reverse(int arr[], int low, int high){
    while(low< high){
        int temp = arr[low]; 
        arr[low] = arr[high]; 
        arr[high] = temp;
        low++; 
        high--; 
    }
}

void leftReverse(int arr[], int num, int d){
    reverse(arr, 0, d-1); 
    reverse(arr, d, num-1); 
    reverse(arr, 0, num-1);

    for(int i =0; i< num; i++){
        cout << arr[i] << " "; 
    }
}

int main(){
    int num; 
    cin >> num; 
    int *arr = new int[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    cout << "enter the d place "<<"\n"; 
    int d; 
    cin >>d; 
    // leftRotateByD(arr, num, d); 
    leftReverse(arr, num, d); 
    return 0; 
}