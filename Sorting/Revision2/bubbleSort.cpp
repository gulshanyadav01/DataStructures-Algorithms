/* 
author: gulshan yadav
date: 20-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;



void bubbleSort(int arr[], int num){
    for(int i = 0; i< num; i++){
        for(int j = 0; j< num-1-i; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
            }
        }
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
    bubbleSort(arr, num); 
    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0; 

}