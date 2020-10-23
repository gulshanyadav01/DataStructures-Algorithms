/* 
author: *gulshan yadav*
date: 23-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;


// this is naive approach 
// time complexity is O(n^2);

int longestSubArrayWithGivenSum(int arr[], int num, int k){
    int count = 0; 
    for(int i = 0; i< num; i++){
        int sum = 0; 
        for(int j = i; j< num; j++){
            sum += arr[j];
            if(sum == k ){
                count = max(j-i+1, count);
            }
        }
    }
    return count; 
}

// efficient Algorithm

int longestSubArray(int arr[], int num, int sum ){
    int res = 0; 
    int preSum = 0; 
    unordered_map<int, int> m; 
    for(int i =0; i< num; i++){
        preSum += arr[i];
        if(preSum == sum) res = i+1;
        if(m.find(preSum) == m.end()){
            m.insert({preSum, i});
        }
        if(m.find(preSum-sum) != m.end()){
            res = max(res, i-m[preSum-sum]);
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
    // cout << longestSubArrayWithGivenSum(arr, num , k);
    cout << longestSubArray(arr, num , k);
    return 0;
}