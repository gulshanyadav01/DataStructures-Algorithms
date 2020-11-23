
/*
author : gulshan yadav
date : 23-NOV-2020
*/

#include<iostream>
using namespace std;

// this is naive approach

int maxOccurringElem(int arr1[], int arr2[], int num){
    int k = 0; 
    int count[256] = {0}; 
    for(int i = arr1[k]; i< arr2[k]; i++) {
        count[i]++; 
    }
    int res = 0;  
    for(int i = 0; i< 256; i++){
        if(count[i]> res){
            res = count[i]; 
        }
        
    }
    return res;
}

int main(){
    int num; 
    cin >> num; 
    int arr1[num]; 
    int arr2[num]; 
    for(int i =0; i< num; i++){
        cin >> arr1[i]; 
    }
    for(int i =0; i< num; i++){
        cin >> arr2[i]; 
    }
    cout << maxOccurringElem(arr1, arr2, num); 
    return 0;
}