/* 
author: gulshan yadav
date: 17-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int peakElem(int arr[], int num){
    if(num == 1) return arr[0]; 
    if(arr[0] >= arr[1]) return arr[0];
    if(arr[num-1]>= arr[num-2]) return arr[num-1];
    int peak = -1; 
    for(int i = 1; i< num-1; i++){
        if(arr[i]>= arr[i-1] && arr[i]>= arr[i+1]){
            peak = arr[i];
            break;
        }
    }
    return peak;
}

// efficient solution 

int peakElement(int arr[], int num){
    int low = 0; 
    int high = num-1; 
    while(low<= high){
        int mid = (low+high)/2; 
        if((mid == 0 || arr[mid-1]<= arr[mid] ) && (mid == num-1 || arr[mid+1]<= arr[mid])) return arr[mid];
        if(mid> 0 && arr[mid-1]<= arr[mid]){
            high= mid-1;
        }
        else{
            low = mid+1; 
        }
    }
}

int main(){
    int num; 
    cin >> num;

    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout <<  peakElem(arr, num); 
    cout << "\n"; 
    cout << peakElement(arr, num); 
    return 0; 
}