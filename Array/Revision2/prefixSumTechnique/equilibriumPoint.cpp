/* 
author: gulshan yadav
date: 15-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// naive solution 

bool equilibriumPoint(int arr[], int num){
    for(int i = 0; i< num; i++){
        int lsum = 0; 
        int rsum = 0; 
        for(int j = 0; j< i; j++){
            lsum += arr[j];
        }
        for(int j = i+1; j< num; j++){
            rsum += arr[j];
        }
        if(lsum == rsum) return true; 
    }
    return false; 
}

// more efficient solution

bool equal(int arr[], int num){
    int sum = 0; 
    for(int i = 0; i< num; i++){
        sum += arr[i];
    }
    int lsum =0; 
    for(int i = 0; i< num; i++){
        if(lsum == sum-arr[i]) return true;
        lsum += arr[i];
        sum -= arr[i]; 
    }
    return false;
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    // cout << equilibriumPoint(arr, num);
    cout << equal(arr, num); 
    return 0; 
}