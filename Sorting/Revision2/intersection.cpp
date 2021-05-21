/* 
author: gulshan yadav
date: 20-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void intersection(int arr1[], int arr2[],  int num1, int num2){
    for(int i = 0; i< num1 ; i++){
        if(i> 0 && arr1[i] == arr1[i-1]){
            continue; 
        }
        for(int j = 0; j< num2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i]<<" "; 
                break;
            }
        }

    }
    
}

// efficient solution 

void intersection2(int arr1[], int arr2[],  int num1, int num2){
    int i = 0; 
    int j = 0; 
    while(i< num1 && j< num2){
        if(i> 0 && arr1[i] == arr1[i-1]){
            i++; 
            continue; 
        }
        if(arr1[i]< arr2[j]) i++; 
        else if(arr2[j]< arr1[i]) j++; 
        else if (arr1[i] == arr2[j]){
            cout << arr1[i]<<" "; 
            i++; 
            j++; 
        }
    }
}

int main(){
    int num1, num2; 
    cin >> num1 >> num2; 
    int arr1[num1], arr2[num2]; 
    for(int i =0; i< num1; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i< num2; i++){
        cin >> arr2[i]; 
    }
    intersection(arr1, arr2, num1, num2); 
    cout << "\n"; 
    intersection2(arr1, arr2, num1, num2); 
    return 0; 
}