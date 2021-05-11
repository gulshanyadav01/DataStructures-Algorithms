/* 
author: gulshan yadav
date: 10-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestEvedOdd(int arr[], int num){
    int res = 0; 
    for(int i =0; i< num; i++){
        int curr = 1; 
        for(int j = i+1; j< num; j++){
            if((arr[j] %2 == 0 && arr[j-1]%2 !=0) 
            || (arr[j] %2 != 0 && arr[j-1] %2 == 0)) curr++; 
            else break;
        }
        res = max(res, curr);
    }
    return res; 
}

// efficient solution for this problem

int longest(int arr[], int num){
    int res = 1; 
    int curr = 1; 
    for(int i = 1; i< num; i++){
        if((arr[i] %2 ==0 && arr[i-1] %2 != 0) || (arr[i] %2 != 0 && arr[i-1] %2 == 0) ){
            curr++; 
            res = max(res, curr); 
        }
        else{
            curr = 1; 
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
    // cout << longestEvedOdd(arr, num); 
    cout << longest(arr, num); 
    return 0; 
}