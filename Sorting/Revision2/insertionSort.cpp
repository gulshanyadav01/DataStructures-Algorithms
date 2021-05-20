/* 
author: gulshan yadav
date: 20-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void insertionSort(int arr[], int num){
    for(int i = 1; i< num; i++){
        int key = arr[i]; 
        int j = i-1; 
        while(j>= 0 && arr[j]> key){
            arr[j+1] = arr[j]; 
            j--; 
        }
        arr[j+1] = key; 
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
    insertionSort(arr, num); 
    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0; 

}