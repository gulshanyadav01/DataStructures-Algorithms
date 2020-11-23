/*
author : gulshan yadav
date : 23-NOV-2020
*/

// efficient solution 
#include <bits/stdc++.h>
int maxSumKCons(int arr[], int num, int k ){
    int sum = INT_MIN;
    for(int i =0; i< num-k+1; i++){
        int curr_sum = 0; 
        for(int j= i; j< k; j++){
            curr_sum += arr[j+i]; 
        }
        sum = max(sum, curr_sum); 
    }
    return sum; 
}
