/* 
author: "gulshan yadav"
date: 26-NOV-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// this is super naive solution 
// time complexity of this solution is Q(n^2); 
int repeatingElem(int arr[], int num){
    for(int i =0; i<num-2; i++){
        for(int j = i+1; j< num-1; j++){
            if(arr[i] == arr[j]) { 
                return arr[i]; 
            }
        }
    }
    return -1; 
}
// this is the naive solution
// first sort the array 
int repeatingElem2(int arr[], int num){
    sort(arr, arr+num); 
    for(int i =0; i< num-1; i++ ){
        if(arr[i] == arr[i+1]){
            return arr[i]; 
        }
    }
    return -1; 
}
int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    cout << repeatingElem(arr, num); 
    cout << repeatingElem2(arr, num); 
    return 0; 
}