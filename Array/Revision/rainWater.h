/*
author : gulshan yadav
date : 18-NOV-2020
*/

// this is naive solution 
// time complexity : Q(N^2); 
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


// efficient solution 


int rainWater2(int arr[], int num){
    int res = 0; 
    int lmax[num]; 
    int rmax[num];
      lmax[0] = arr[0]; 
    for(int i = 1; i< num; i++){
        lmax[i] = max(lmax[i-1], arr[i]); 
    }
     rmax[num-1] = arr[num-1]; 
    for(int i = num-2; i> 0; i--){
        rmax[i] = max(rmax[i+1], arr[i]); 
    }
    for(int i = 1; i< num-1; i++){
        res = res + (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res; 
}