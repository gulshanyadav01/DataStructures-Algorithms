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

// this approach has the time complexity O(n^2);
bool subArraySumZero(int arr[], int num){
    for(int i = 0; i< num; i++){
        // if(arr[i] == 0) return true;
        int sum = 0;
        for(int j= i; j< num; j++){
            sum += arr[j];
            if(sum == 0 ){
                return true;
            }
        }
    
    }
    return false;
}

// efficient Approach

bool subArraySumZero2(int arr[], int num){
    int prefixSum = 0; 
    unordered_set<int> s; 
    for(int i = 0; i< num; i++){
        prefixSum = arr[i] + prefixSum;
        if(s.find(prefixSum) != s.end()) return true;
        if(prefixSum ==  0 ) return true;
        s.insert(prefixSum);

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

    cout << subArraySumZero2(arr, num);
    return 0;
}