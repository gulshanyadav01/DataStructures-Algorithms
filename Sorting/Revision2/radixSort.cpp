/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


void countingSort(int arr[], int num, int exp){
    int count[10];
    // initialize with 0; 
    for(int i = 0; i< 10; i++){
        count[i] = 0; 
    }
    // fill the count array 
    for(int i = 0; i< num; i++){
        count[(arr[i]/exp) % 10 ]++;
    }

    // commute the count array
    for(int i = 1; i< 10; i++){
        count[i] = count[i] + count[i-1];
    }
    // make the output array
    int output[num];
    for(int i = num-1; i>=0; i--){
        output[count[(arr[i]/exp)% 10 ]-1] = arr[i]; 
        count[(arr[i]/exp) % 10]--; 
    }
    // copy into original array
    for(int i = 0; i< num; i++){
        arr[i] = output[i]; 
    }
}

void radixSort(int arr[], int num){
    int mx = arr[0];
    for(int i =1; i< num; i++){
        mx = max(arr[i], mx);
    }
    cout << mx << endl;
    for(int exp = 1; mx/exp > 0; exp = exp*10){
        countingSort(arr, num, exp); 
    }
}



int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    // for(int i = 0; i< num; i++){
    //     cout << arr[i]<<" "; 
    // }

    radixSort(arr, num); 
    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0; 

}
