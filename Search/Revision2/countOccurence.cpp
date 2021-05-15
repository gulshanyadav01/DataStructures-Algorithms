/* 
author: gulshan yadav
date: 15-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

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

int countOccurence(int arr[], int num, int key){
    int first = firstOccurence(arr, num, 0, num-1, key); 
    if(first == -1) return -1; 
    else{
            return (lastOccurence(arr, num, 0, num-1, key) - first + 1); 
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
    cout << countOccurence(arr , num, key); 
    return 0; 
}
