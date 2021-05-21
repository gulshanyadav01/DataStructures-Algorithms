/* 
author: gulshan yadav
date: 20-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// merge function 
void merge(int arr[], int low, int mid, int high){
    int num1 = mid - low + 1; 
    int num2 = high - mid;
    int arr1[num1]; 
    int arr2[num2]; 
    // make the left array
    for(int i = 0; i< num1; i++){
        arr1[i] = arr[low + i]; 

    }

    // make the right array
    for(int j = 0; j< num2; j++){
        arr2[j] = arr[mid+1+j]; 

    }
    int i = 0; int j = 0; int k = low; 
    while(i< num1 && j< num2){
        if(arr1[i]<= arr2[j]){
            arr[k++] = arr1[i++]; 
        }
        else {
            arr[k++] = arr2[j++]; 
        }
    }
    while(i< num1){
        arr[k++] = arr1[i++]; 
    }
    while(j< num2){
        arr[k++] = arr2[j++]; 
    }

}

// merge sort

void mergeSort(int arr[], int l, int r){
    if(r > l){
        int mid = (l+r)/2; 
        mergeSort(arr, l, mid); 
        mergeSort(arr, mid+1, r); 
        merge(arr, l, mid, r); 
    }
}


int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }

    for(int i = 0; i< num; i++){
        cout << arr[i]<<" "; 
    }
    cout <<"\n";
    mergeSort(arr, 0, num); 
    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0; 

}
