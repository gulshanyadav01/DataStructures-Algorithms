/* 
author: gulshan yadav
date: 24-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

int partition(int arr[], int low, int high){
    int pivot = arr[high]; 
    int i = low;
    int j = low-1;  
    for(int i = low; i<= high-1; i++){
        if(arr[i]< pivot){
            j++; 
            int temp = arr[j]; 
            arr[j] = arr[i]; 
            arr[i] = temp; 
        }
    }
    int temp = arr[high]; 
    arr[high] = arr[j+1]; 
    arr[j+1] = temp; 
    return j+1; 
}

int kthSmallestElem(int arr[], int num, int k ){
    int low  = 0; 
    int high = num-1; 
    while(low<= high){
        int p = partition(arr, low, high); 
        if(p == k-1) return arr[p]; 
        else if (p> k-1) high = p-1; 
        else low = p+1; 
    }
    return -1; 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    int k; 
    cin >> k; 
    cout << kthSmallestElem(arr, num, k);
    return 0
}