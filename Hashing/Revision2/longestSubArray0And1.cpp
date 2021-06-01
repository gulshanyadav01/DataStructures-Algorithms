/* 
author: gulshan yadav
date: 01-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution

int longestSubArray0And1(int arr[], int num){
    int res = 0; 
    for(int i =0; i< num; i++){
        int count1 =0, count0 = 0; 
        for(int j = i; j< num; j++){
            if(arr[j]==1) count1++; 
            else count0++; 
            if(count1 == count0) res = max(res, count1+count0);
        }
    }
    return res; 
}

// efficient solution 
int longestSubArray(int arr[], int num, int sum){
    int prefixSum = 0; 
    int res = 0; 
    unordered_map<int, int> m; 
    for(int i =0; i< num; i++){
        prefixSum += arr[i];
        if(prefixSum == sum){
            res = i+1; 
        }
        if(m.find(prefixSum) == m.end()){
            m.insert({prefixSum, i});
        }
        if(m.find(prefixSum-sum)!= m.end()){
            res = max(res, i-m[prefixSum-sum]);
        }
    }
    return res; 
}

int longest(int arr[], int num){
    // replace all zero with -1
    for(int i =0; i< num; i++){
        if(arr[i] == 0){
            arr[i] = -1; 
        }
    }
    return longestSubArray(arr, num , 0); 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }
    // cout << longestSubArray0And1(arr, num);
    cout << longest(arr, num); 
    return 0; 
}