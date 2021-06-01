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

bool subArraySum0(int arr[], int num){
    for(int i =0; i< num; i++){
        int currSum = 0; 
        for(int j = i; j< num; j++){
            currSum+= arr[j];
            if(currSum == 0) return true; 

        }
    }
    return false; 
}

// efficient solution 

bool subArraySumZero(int arr[], int num){
    unordered_set<int> s; 
    int prefixSum = 0; 
    for(int i =0; i< num; i++){
        prefixSum+= arr[i];
        if(s.find(prefixSum) != s.end()) return true; 
        if(prefixSum == 0) return true; 
        s.insert(prefixSum);
    }
    return false; 
}


int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }
    cout << subArraySum0(arr, num); 
    cout << endl;
    cout << subArraySumZero(arr, num); 
    
    return 0; 
}