/*

author:"gulshan yadav",
date: 07-NOV-2020

*/

#include<iostream>
using namespace std; 
// #include "removeDup.h"

void removeDup(int arr[], int num){
    int j = 0; 
    // cout << "hello";
    for(int i = 1; i< num; i++){
        if(arr[i] != arr[j]){
            j++; 
            arr[j] = arr[i]; 
            
        }
    }
    cout << j; 
    for(int i = 0; i<= j; i++){
        cout << arr[i]<<" "; 
    }
}

