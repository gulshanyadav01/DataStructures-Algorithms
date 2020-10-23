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

bool subArrayWithGivenSum(int arr[], int sum, int num){
    unordered_set<int> s; 
     int preSum = 0;
    for(int i = 0; i< num; i++){
        preSum += arr[i];
        if(preSum == sum) return true;
        if(s.find(preSum - sum ) != s.end()) return true;
        else s.insert(preSum);
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
    int sum; 
    cin >> sum; 

    cout << subArrayWithGivenSum(arr, sum, num);
    return 0;
}