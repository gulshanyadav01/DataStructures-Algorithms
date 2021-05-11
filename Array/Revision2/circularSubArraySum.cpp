/* 
author: gulshan yadav
date: 10-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int circularSum(int arr[], int num){
    int res = arr[0]; 
    for(int i = 0; i< num; i++){
        int currSum = arr[i]; 
        int currMax = arr[i]; 
        for(int j = 1; j< num; j++){
            int index = (i+j) % num; 
            currSum += arr[index]; 
            currMax = max(currSum, currMax);
        }
        res = max(currMax, res);
 
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
    cout << circularSum(arr, num); 
    return 0; 
}