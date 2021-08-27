/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 18-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subsetSum(int index, vector<int> &arr, int sum, vector<int> &ans){
    if(index == arr.size()){
        ans.push_back(sum);
        
        return; 
    }

    int sum1 = sum; 
    int sum2 = sum; 

    sum1 += arr[index]; 

    subsetSum(index+1, arr, sum1, ans); 
    subsetSum(index+1, arr, sum2, ans); 
}


int main(){
    int num; 
    cin >> num; 
    vector<int> arr; 
    vector<int> ans; 

    for(int i =0 ; i< num; i++){
        int a; 
        cin >> a; 
        arr.push_back(a); 
    }

    subsetSum(0, arr, 0, ans);

    sort(ans.begin(), ans.end()); 

    for(int x: ans){
        cout << x << " "; 
        
    } 
    return 0;
}