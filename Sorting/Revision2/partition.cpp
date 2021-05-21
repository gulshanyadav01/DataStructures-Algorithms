/* 
author: gulshan yadav
date: 21-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive partition 

void naivePartition(int arr[], int l, int h, int p ){
    int temp[h-l+1]; 
    int ind = 0; 
    // less then or equal to pivot on left side; 
    for(int i = l; i<=h; i++){
        if(arr[i]<= arr[p]){
            temp[ind] = arr[i]; 
            ind++; 
        }
    }

    // greater than pivot on right side; 
    for(int i = l; i<= h; i++){
        if(arr[i]> arr[p]){
            temp[ind] = arr[i]; 
            ind++; 
        }
    }

    // copy to the original array 
    for(int i = l; i<=h; i++){
        arr[i] = temp[i-l]; 
    }

}

// lomuto partition 

int lomutoPartition(int arr[], int low, int high){
    int pivot = arr[high]; 
    int i = low-1; 
    for(int j = i; j<= high-1; j++){
        if(arr[j]< pivot){
            i++; 
            int temp = arr[i]; 
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }
    // swap the arr[h] and arr[i+1]; 
    int temp = arr[high]; 
    arr[high] = arr[i+1]; 
    arr[i+1] = temp; 
    return i+1; 
}

