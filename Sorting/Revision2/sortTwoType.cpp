/* 
author: gulshan yadav
date: 25-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

// naive solution

void sortTwoType(int arr[], int num){
    int temp[num]; 
    int j = 0; 
    for(int i =0; i< num; i++){
        if(arr[i]< 0){
            temp[j] = arr[i]; 
            j++; 
        }

    }
    for(int i =0; i< num; i++){
        if(arr[i]>= 0){
            temp[j] = arr[i]; 
            j++; 
        }

    }
    // copy into original array
    for(int i = 0; i< num; i++){
        arr[i] = temp[i]; 
    }

}


// efficient solution 

void segPosHoare(int arr[], int num){
    int i = -1; 
    int j = num; 
    while(true){
        do{
            i++;
        }while(arr[i]< 0);
        do{
            j--; 
        }while(arr[j]>= 0); 
        if(i>= j) break;
        int temp = arr[i];
        arr[i] = arr[j]; 
        arr[j] = temp; 
    }
}

void segPosLumoto(int arr[], int num){
    int i = -1;
    for(int j = 0; j< num; j++){
        if(arr[j]%2 !=  0){
            i++; 
            int temp = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] = temp; 
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
        cout << arr[i] << " "; 
    }
    cout << "\n"; 

    // segPosHoare(arr, num); 
    segPosLumoto(arr, num); 
    for(int i = 0; i< num; i++){
        cout << arr[i]<< " "; 
    }
}