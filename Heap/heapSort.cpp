/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 19-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int right(int i){
    return (2*i+2);
}

int left(int i ){
    return (2*i+1); 
}



void maxHeapify(int arr[], int num, int i ){
    int largest = i; 
    int lt = left(i); 
    int rt = right(i); 
    if(lt< num && arr[i]< arr[lt]){
        largest = lt;
    }
    if(rt< num && arr[largest]< arr[rt]){
        largest = rt; 
    }
    if(largest!= i){
        swap(arr[i], arr[largest]);
        maxHeapify(arr, num, i); 
    }

}

void buildHeap(int arr[], int num){
    for(int i = (num-2)/2; i>= 0; i--){
        maxHeapify(arr, num, i); 
    }
}

void heapSort(int arr[], int num){
    // step1: build the heap
    buildHeap(arr, num); 
    
    // step2: 
    for(int i = num-1; i> 0; i--){
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0); 
    }
}

int main(){
    int arr[5]  = {10, 15, 50, 4, 20}; 
    heapSort(arr, 5);  
    // print the array
    for(int i = 0; i< 5; i++){
        cout << arr[i]<<" ";
    }
    return 0; 
}