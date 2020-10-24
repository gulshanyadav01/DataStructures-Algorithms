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

int longestSubArrayWithEqualZeroAndOne(int arr[], int num){
    int res = 0; 
    for(int i = 0; i< num; i++){
        int c0 = 0, c1= 0; 
        for(int j = i; j< num; j++){
            if(arr[j] == 0) c0++;
            if(arr[j] == 1) c1++;
            if(c1 == c0) res = max(res, j-i+1);

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

    cout << longestSubArrayWithEqualZeroAndOne(arr, num); 
    return 0;
}