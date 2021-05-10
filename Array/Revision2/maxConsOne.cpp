/* 
author: gulshan yadav
date: 10-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxConsOne(int arr[], int num){
    int res = 0; 
    for(int i = 0; i< num; i++){
        int curr = 0; 
        for(int j = i; j< num; j++){
            if(arr[j] == 1) curr++; 
            else  break;
        }
        res = max(res, curr); 
    }
    return res; 

}

// efficient solution 

int maxOne(int arr[], int num){
    int res = 0; 
    int curr = 0; 
    for(int i = 0; i< num; i++){
        if(arr[i] == 1) {
            curr++; 
            res = max(curr, res); 
        }
        else{
            curr = 0; 
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
    // cout << maxConsOne(arr, num);
    cout << maxOne(arr, num); 
    return 0; 
}