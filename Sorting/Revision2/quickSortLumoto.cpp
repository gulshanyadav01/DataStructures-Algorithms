/* 
author: gulshan yadav
date: 22-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int partition(int arr[], int l, int h){
    int pivot = arr[h]; 
    int i = l-1; 
    for(int j = l; j<=h-1; j++){
        if(arr[j]< pivot){
            i++; 
            int temp = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] = temp; 
        }
    }
    int temp = arr[h]; 
    arr[h] = arr[i+1]; 
    arr[i+1] = temp; 
    return i+1; 

}

void quickSort1(int arr[], int l, int h){
    if(l< h){
        int p = partition(arr, l, h); 
        quickSort1(arr, l, p-1); 
        quickSort1(arr, p+1, h); 
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
    quickSort1(arr, 0, num-1); 
    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}