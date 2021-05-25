/* 
author: gulshan yadav
date: 25-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

// naive solution 
// time for this is Q(N^2); 
int minDiff(int arr[], int num){
    int res = INT_MAX; 
    for(int i = 1; i< num; i++){
        for(int j = 0; j<i; j++){
            res = min(res, abs(arr[i] - arr[j]));
        }
    }
    return res; 
}

// efficient solution 

int minDiff2(int arr[], int num){
    int res = INT_MAX; 
    sort(arr, arr+num); 
    for(int i = 1; i< num; i++){
        res = min(res, arr[i] - arr[i-1]); 
    }
    return res; 
}


int main(){
    int num; 
    cin>> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << minDiff(arr, num);
    cout <<"\n"; 
    cout << minDiff2(arr, num); 
    return 0; 
}