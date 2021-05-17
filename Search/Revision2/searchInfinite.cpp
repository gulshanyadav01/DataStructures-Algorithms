/* 
author: gulshan yadav
date: 17-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// given : sorted array
// naive solution 

int search(int arr[], int x, int num){
    int i = 0; 
    while(true){
        if(arr[i] == x) return i; 
        if(arr[i] > x  ) return -1; 
        i++; 
    }
}

// given : sorted array 
// efficient solution 

int binarySearch(int arr[], int x, int low, int high){
    if(low> high) return -1; 
    int mid = (low+high)/2; 
    if(arr[mid] == x) return mid;
    else if(arr[mid]> x){
        return binarySearch(arr, x, low, mid-1); 
    }
    else{
        return binarySearch(arr, x, mid+1, high); 
    }
}

int search1(int arr[], int x){
    if(arr[0] == x) return 0; 
    int i = 1; 
    while(arr[i] < x){
        i = i*2; 
    }
    if(arr[i] == x ) return i; 
    return binarySearch(arr, x, (i/2)+1, i-1); 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    int x; 
    cin >> x; 

    cout << search1(arr, x); 
    return 0; 
}