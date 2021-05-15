/* 
author: gulshan yadav
date: 15-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// this is recursive solution 

int firstOccurence(int arr[], int num, int low , int high, int key){
    if(low> high) return -1; 
    int mid = (low+high)/2; 
    if(arr[mid] > key){
        return firstOccurence(arr, num, low, mid-1, key);
    }
    else if(arr[mid]< key){
        return firstOccurence(arr, num, mid+1, high, key);
    }
    else {
        if(mid == 0 || arr[mid-1] != arr[mid]) return mid;
        else{
            return firstOccurence(arr, num, low, mid-1, key); 
        }
    }
}
// this is iterative solution of the first occurence 

int firstOccurence2(int arr[], int num, int key){
    int low = 0;
    int high = num-1; 
    while(low<= high){
        int mid = (low+high)/2; 
         
        if (arr[mid] > key) {
            high = mid-1; 
        }
        else if (arr[mid]< key){
            low = mid+1; 
        }
        else{
            if(mid == 0 || arr[mid-1] != arr[mid]) return mid;
            else high = mid-1; 
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
    cout << firstOccurence(arr, num, 0, num-1, key);
    cout << "\n"; 
    cout << firstOccurence2(arr, num, key); 
    return 0; 
}