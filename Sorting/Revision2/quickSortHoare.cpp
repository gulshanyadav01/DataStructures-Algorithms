/* 
author: gulshan yadav
date: 24-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

int  partition(int arr[], int low, int high){
    int pivot = arr[low]; 
    int i = low-1; 
    int j = high+1; 
    do{
        i++; 
    }while(arr[i]<pivot ); 
    do{
        j--; 
    }while(arr[j]> pivot ); 
    if(i>= j) return j; 
    int temp= arr[i]; 
    arr[i] = arr[j]; 
    arr[j] = temp; 

}
void quickSort(int arr[], int low, int high){
    if(low< high){
        int p = partition(arr, low, high); 
        quickSort(arr, low, p); 
        quickSort(arr, p+1, high); 
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
    quickSort(arr, 0, num-1); 
    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0; 

}