/* 
author: gulshan yadav
date: 11-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int circularSum(int arr[], int num){
    int res = arr[0]; 
    for(int i = 0; i< num; i++){
        int currSum = arr[i]; 
        int currMax = arr[i]; 
        for(int j = 1; j< num; j++){
            int index = (i+j) % num; 
            currSum += arr[index]; 
            currMax = max(currSum, currMax);
        }
        res = max(currMax, res);
 
    }
    return res; 
}


// efficient solution

int minSum(int arr[], int num){
    int res = arr[0]; 
    int sum = arr[0]; 

    for(int i = 1; i< num; i++){
        sum = min(arr[i]+ sum, arr[i]);
        res = min(sum, res); 

    }
    return res; 
}

int maxCircularSum(int arr[], int num){
    int totalSum = arr[0];  
    for(int i = 1; i< num; i++){
        totalSum += arr[i]; 
    }
    return totalSum-minSum(arr, num); 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i =0; i< num; i++){
        cin >> arr[i]; 
    }
    // cout << circularSum(arr, num); 
    cout << maxCircularSum(arr, num); 
    return 0; 
}