/* 
author: gulshan yadav
date: 10-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int maxSumSubArray(int arr[], int num){
    int res = arr[0]; 
    for(int i = 0; i< num; i++){
        int curr = 0; 
        for(int j = i; j< num; j++){
            curr += arr[j]; 
            res = max(curr, res);
        }
    }
    return res; 
}

// efficient solution 

int maxSum(int arr[], int num){
    int sum = arr[0]; 
    int res =  arr[0]; 
    for(int i = 0;i< num; i++){
        sum  = max(arr[i], arr[i]+ sum); 
        res  = max(res, sum);

    }
    return sum; 
}

// again max sum sub array 
int maxSum(int arr[], int num){
    int res = arr[0]; 
    int sum = arr[0];  
    for(int i = 0; i< num; i++){
        sum += max(sum+arr[i], arr[i]); 
        res = max(res, sum); 

    }
    return res; 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    cout << maxSumSubArray(arr, num); 
    // cout << maxSum(arr, num); 
    return 0; 
}