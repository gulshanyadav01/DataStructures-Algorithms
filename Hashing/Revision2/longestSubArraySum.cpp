/* 
author: gulshan yadav
date: 01-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int longestSubArraySum(int arr[], int num, int sum){
    int res = 0; 
    for(int i =0; i< num; i++){
        int currSum= 0; 
        for(int j =i; j< num; j++){
            currSum+= arr[j];
            if(currSum == sum){
                res = max(j-i+1, res);
            }
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

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }
    int sum; 
    cin >> sum; 
    cout << longestSubArraySum(arr, num, sum); 
    cout << endl;
    cout << longestSubArray(arr, num, sum); 
    
    return 0; 
}
