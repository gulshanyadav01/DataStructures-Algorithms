/* 
author: gulshan yadav
date: 20-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int sum(int arr[], int s, int e){
    int sum = 0; 
    for(int i = s; i<= e; i++){
        sum+= arr[i]; 
    }
    return sum; 
}

int minPages1(int arr[], int num, int k ){
    if(k == 1){
        return sum(arr, 0, num-1);
    }
    if(num == 1){
        return arr[0];
    }
    int res  = INT_MAX; 
    for(int i = 1; i< num; i++){
        res = min(res, max(minPages1(arr, i, k-1), sum(arr, i, num-1))); 
    }
    return res; 
}

// efficient solution

bool isFeasible(int arr[], int num, int k, int ans){
    int sum = 0; 
    int req = 1; 
    for(int i = 0; i< num; i++){
        if(sum+arr[i]> ans){
            req++; 
            sum = arr[i];
        }
        else{
            sum+= arr[i]; 
        }
    }
    return (req<=k); 
}

int minPages(int arr[], int num, int k ){
    int sum = 0; 
    int mx = arr[0]; 
    for(int i =0; i< num; i++){
        sum += arr[i]; 
        mx = max(mx, arr[i]);
    }
    int low = mx; 
    int high = sum; 
    int res = 0; 
    while(low<= high){
        int mid = (low+high)/2; 
        if(isFeasible(arr, num, k, mid)){
            res = mid; 
            high = mid-1; 
        }
        else{
            low = mid+1; 
        }
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
    int k; 
    cin >> k; 
    cout << minPages(arr, num, k); 
    return 0; 
}