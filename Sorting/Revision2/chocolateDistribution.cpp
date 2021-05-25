/* 
author: gulshan yadav
date: 25-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

int chocolateDistribution(int arr[], int num, int k ){
    if(k> num) return -1; 
    sort(arr, arr+num); 
    int res = arr[k-1] - arr[0]; 
    for(int i =1; i+k-1< num; i++){
        res = min(res, arr[i+k-1] - arr[i]); 
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
    int k; 
    cin >> k; 
    cout << chocolateDistribution(arr, num, k); 
    return 0; 
}