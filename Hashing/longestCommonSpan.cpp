/* 
author: *gulshan yadav*
date: 23-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int longestCommonSpan(int arr1[], int arr2[], int num ){
    int res = 0; 
    for(int i = 0; i< num; i++){
        int sum1= 0, sum2= 0; 
        for(int j = i; j<num; j++ ){
            sum1 += arr1[j]; 
            sum2 += arr2[j];
            if(sum1 == sum2 ){
                res = max(res, j-i+1);
            }
        }
    }
    return res;
}

int main(){
    int num; 
    cin >> num; 
    int arr1[num], arr2[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr1[i]; 
    }
    for(int i = 0; i< num; i++){
        cin >> arr2[i]; 
    }
    cout << longestCommonSpan(arr1, arr2, num); 
    return 0;
}