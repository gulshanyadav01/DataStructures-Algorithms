/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 19-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int left(int i ){
    return (2*i+1);
}
int right(int i ){
    return (2*i+2); 
}

void minHeapify(int i, int size, int *arr ){
    int smallest = i; 
    int lt = left(i); 
    int rt = right(i); 
    if(lt< size && arr[lt]< arr[i]){
        smallest = lt; 
    }
    if(rt< size && arr[rt]< arr[smallest]){
        smallest = rt; 
    }
    if(smallest!= i){
        swap(arr[i], arr[smallest]); 
        minHeapify(smallest, size, arr); 
    }
}

void build(int arr[], int num){
    for(int i = (num-2)/2; i >=0; i--){
        minHeapify(i, num, arr); 
    }
}

int main(){
    int arr[6] = {10, 5, 20, 2, 4, 8}; 
    build(arr, 6); 
    // print the array 
    for(int i =0; i< 6; i++){
        cout << arr[i]<<" ";
    }
    return 0; 
}

