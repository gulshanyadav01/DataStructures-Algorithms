
/*
author : gulshan yadav
date : 23-NOV-2020
*/


#include<iostream>
using namespace std;

void prefixSumInRange(int arr[], int num, int l, int r ){
    int prefixSum[num]; 
    prefixSum[0] = arr[0]; 
    for(int i= 1; i< num; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i]; 
    }
    // 
    if(l!= 0){
        cout << prefixSum[r] - prefixSum[l-1]; 
    }
    else { 
        cout << prefixSum[r]; 
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i]; 
    }
    int l, r; 
    cin >> l >> r; 
    prefixSumInRange(arr, num, l, r); 
    return 0;
}