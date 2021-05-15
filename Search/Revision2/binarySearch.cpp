/* 
author: gulshan yadav
date: 15-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int binarySearch(int arr[], int num, int key){
    int low = 0; 
    int high = num-1; 
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid] == key) return mid; 
        else if(arr[mid] < key) low = mid+1; 
        else if(arr[mid] > key) high = mid-1;
    }
    return -1; 
}

// binary search recursively

int binary(int arr[], int num,int low, int high,  int key){
    if(low > high) return -1; 
    int mid = (low+high)/2; 
    if(arr[mid] == key) return mid; 
    else if(arr[mid] > key){
       return  binary(arr, num, low, mid-1, key);

    }
    else if(arr[mid] < key) {
       return  binary(arr, num, mid+1, high, key);
    }
    
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key; 
    cout << binarySearch(arr, num, key);
    cout <<"\n"; 
    cout << binary(arr, num, 0, num-1, key);
    return 0; 
}