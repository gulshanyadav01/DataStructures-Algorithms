/* 
author: gulshan yadav
date: 12-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSumKConsElem(int arr[], int num, int k ){
    int res = INT_MIN;
    for(int i =0; i<= num-k; i++){
        int sum = 0; 
        for(int j = 0; j< k; j++){
            sum += arr[i+j];
        }
        res = max(res, sum);
    }
    return res; 
}

// efficient solution :
// precompute the window of k 
// then add one to it and subtract one to it
int maxSum(int arr[], int num, int k){
    int windowSum = 0; 
    
    for(int i= 0; i< k; i++ ){
        windowSum += arr[i];
    }
    int res =  windowSum; 
    for(int i = 0; i< num-k; i++){
        windowSum = windowSum-arr[i] + arr[k+i];
        res = max(res, windowSum);
    }
    return res;
    
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }
    int k; 
    cin >> k;
    // cout << maxSumKConsElem(arr, num, k);
    cout << maxSum(arr, num, k); 
    return 0; 
}