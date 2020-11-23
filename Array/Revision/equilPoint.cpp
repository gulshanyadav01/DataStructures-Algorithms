
/*
author : gulshan yadav
date : 23-NOV-2020
*/

#include<iostream>
using namespace std;

// this is the naive approach
bool equilPoint(int arr[], int num){
    for(int i =0; i< num; i++){
        int lsum = 0; 
        int rsum = 0;
        for(int j = 0; j< i; j++){
            lsum += arr[j]; 
        }
        for(int j = i+1; j< num; j++){
            rsum += arr[j]; 
        }
        if(rsum == lsum){
            return true;
        }
    }
    return false;
}

// this is the efficient appraoch

bool equilPoint2(int arr[], int num){
    int rsum = 0;
    for(int i =0; i< num; i++){
        rsum += arr[i];
    }
    int lsum = 0; 
    for(int i = 0; i< num; i++){
        if(lsum == (rsum-arr[i])){
            return true;
        }
        lsum += arr[i]; 
        rsum -= arr[i]; 
    }
    return false;
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i]; 
    }
    // cout << equilPoint(arr, num); 
    cout << equilPoint2(arr, num); 
    return 0;
}
