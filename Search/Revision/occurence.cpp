/* 
author: "gulshan yadav"
date: 24-NOV-2020
*/
#include<iostream>
using namespace std;
int firstOccur(int arr[], int num, int low, int high, int key){
    if(low > high){
        return -1; 
    }
    int mid = (low+ high)/2; 
    if(arr[mid]< key){
       return  firstOccur(arr, num, mid+1, high,key); 
        
    }
    else if(arr[mid]> key){
        return firstOccur(arr, num , low, mid-1,key); 

    }
    else {
        if(mid == 0 || arr[mid-1] != arr[mid]){
            return mid; 
        }
        else {
            return firstOccur(arr, num, low, mid-1, key); 
        }
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }

    int key; 
    cin >> key; 
    cout << firstOccur(arr, num, 0, num-1, key); 
    return 0;
}   