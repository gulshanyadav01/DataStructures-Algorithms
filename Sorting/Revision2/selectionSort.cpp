/* 
author: gulshan yadav
date: 20-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void selectionSort(int arr[], int num){
    for(int i = 0; i< num; i++){
        int j; 
        int ind = i; 
        for(j=  i+1; j< num; j++){
            if(arr[j]< arr[i]){
                ind = j; 
            }
        }
        int temp = arr[i]; 
        arr[i] = arr[ind]; 
        arr[ind] = temp;  
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
    selectionSort(arr, num); 
    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0; 

}