/* 
author: *gulshan yadav*
date: 23-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<unordered_set>
#include<bits/stdc++.h>
using namespace std;

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

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }

    int k; 
    cin >> k;
    cout << longestSubArrayWithGivenSum(arr, num , k);
    return 0;
}