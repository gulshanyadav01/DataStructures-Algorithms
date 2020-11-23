/*
author : gulshan yadav
date : 23-NOV-2020
*/


// this is the naive solution 
// time complexity of this solution is Q((n-k)*k)
#include <bits/stdc++.h>
int maxSumKCons(int arr[], int num, int k ){
    int sum = INT_MIN;
    for(int i =0; i< num-k+1; i++){
        int curr_sum = 0; 
        for(int j= i; j< k; j++){
            curr_sum += arr[j+i]; 
        }
        sum = max(sum, curr_sum); 
    }
    return sum; 
}

//  efficient solution 

int maxSum2(int arr[], int num, int k ){
    int sum = 0; 
    for(int i = 0;i< k; i++){
        sum += arr[i]; 
    }
    int maxSum = sum;  
    int currSum = sum; 
    for(int i = k; i< num; i++){
        currSum += arr[i] - arr[i-k]; 
        maxSum = max(maxSum, currSum); 
        
    }
    return maxSum; 
}