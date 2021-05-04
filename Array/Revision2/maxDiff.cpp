/* 
author: gulshan yadav
date: 04-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int num){
    int res = INT_MIN; 
    for(int i = 0; i< num; i++){
        int res1 = INT_MIN; 
        for(int j = i+1; j< num; j++){
            res1= max(arr[j] - arr[i], res1); 
        }
        res = max(res1, res); 
    }
    return res; 
}

// this is efficient solution 

int maxDiff2(int arr[], int num){
    int res = arr[1] - arr[0]; 
    int minValue = arr[0]; 
    for(int i = 1; i< num; i++){
        res = max(arr[i] - minValue, res); 
        minValue  = min(arr[i], minValue);
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
    cout << maxDiff2(arr, num); 
    return 0; 
}