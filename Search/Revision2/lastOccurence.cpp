/* 
author: gulshan yadav
date: 15-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// recursive solution of last occurence

int lastOccurence(int arr[], int num, int low, int high, int key){
    if(low> high) return -1;
    int mid = (low+high)/2; 
    if(arr[mid] > key){
        return lastOccurence(arr, num, low, mid-1, key);
    }
    else if(arr[mid]< key){
        return lastOccurence(arr, num, mid+1, high,  key); 
    }
    else{
        if(mid == num-1 || arr[mid] != arr[mid+1]) return mid;
        else{
            return lastOccurence(arr, num, mid+1, high, key);
        }
    }
}

// iterative solution of last occurence 

int last(int arr[], int num, int key){
    int low = 0; 
    int high = num-1; 
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid] > key){
            high = mid-1; 
        }
        else if(arr[mid] < key){
            low = mid+1; 
        }
        else {
            if(mid == 0 || arr[mid] != arr[mid+1]) return mid; 
            else{
                low = mid+1; 
            }
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
    int key; 
    cin >> key; 
    cout << lastOccurence(arr, num, 0, num-1, key); 
    cout << "\n"; 
    cout << last(arr, num , key); 
    return 0; 
}