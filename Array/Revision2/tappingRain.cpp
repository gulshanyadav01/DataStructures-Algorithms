/* 
author: gulshan yadav
date: 10-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int tappingRainWater(int arr[], int num) {
    int res = 0; 

    for(int i = 1; i< num-1; i++){
        int lmax = arr[i]; 
        for(int j = 0; j< i; j++){
            if(arr[j]> lmax){
                lmax = arr[j]; 
            }
        }
        int rmax  = arr[i]; 
        for(int j =i+1; j< num; j++){
            if(arr[j]> rmax){
                rmax = arr[j]; 
            }
        }
        res += (min(lmax, rmax) - arr[i]); 
    }
    return res; 
}

// efficient solution for tapping rain water 

int tappingRain(int arr[], int num){
    int res = 0; 
    int lmax[num];
    int rmax[num];
    lmax[0] = arr[0]; 
    rmax[num-1] = arr[num-1]; 
    for(int i = 1; i< num; i++){
        lmax[i] = max(lmax[i-1], arr[i]); 
    }
    for(int i = num-2; i>= 0; i--){
        rmax[i] = max(rmax[i+1], arr[i]); 
    }
    for(int i =1; i< num-1; i++){
        res += (min(lmax[i], rmax[i]) - arr[i]); 
    }
    return res; 

}

// tapping rain water 

int tappingRainWater1(int arr[], int num){
    int res = 0; 
    int lmax[num]; 
    int rmax[num]; 
    lmax[0] = arr[0]; 
    rmax[num-1] = arr[num-1]; 
    for(int i =0; i< num; i++){
        lmax[i] = max(lmax[i-1], arr[i]); 
    }
    for(int i = num-2; i>= 0; i--){
        rmax[i] = max(rmax[i+1], arr[i]); 
    }
    // count the value 
    for(int i =1; i< num-1; i++){
        res += (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res; 
}

int main(){
    int num; 
    cin >> num; 
    int *arr = new int[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }
    // cout << tappingRainWater(arr, num);
    // cout << tappingRain(arr, num); 
    cout << tappingRainWater1(arr, num); 
    return 0; 
}