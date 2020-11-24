/* 
author: "gulshan yadav"
date: 24-NOV-2020
*/
#include<iostream>
using namespace std;

int peakElement(int arr[], int num){
    int low = 0; 
    int high = num -1; 
    while(low<= high){
        int mid  = (low+high)/2; 
        if((mid==0 || arr[mid-1]<= arr[mid]) && (mid==num-1 || arr[mid+1]<= arr[mid])){
            return arr[mid]; 
        }
        if(mid>0 && arr[mid-1]> arr[mid]){
            high = mid-1; 
        }
        else {
            low = mid+ 1; 
        }
    }
    return -1; 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }
    cout << peakElement(arr, num); 
    return 0; 
}