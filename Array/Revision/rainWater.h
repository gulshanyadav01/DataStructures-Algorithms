/*
author : gulshan yadav
date : 18-NOV-2020
*/

// this is naive solution 

int rainWater1(int arr[], int num){
    int res =0; 
    for(int i = 1; i< num-1; i++){
        int lmax = arr[i]; 
        for(int j =0; j< i; j++){
            lmax = max(lmax, arr[j]); 
        }
        int rmax = arr[i]; 
        for(int j = i+1; j< num; j++){
            rmax = max(rmax, arr[j]); 
        }
        res += (min(lmax, rmax) - arr[i]); 
    }
    return res; 
}