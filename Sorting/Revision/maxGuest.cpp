/* 
author: "gulshan yadav"
date: 02-DEC-2020

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxGuest(int arr[], int dep[], int num){
    int res = 1; 
    int curr = 1; 
    sort(arr, arr+num); 
    sort(dep, dep+num);
    int i = 1; 
    int j = 0; 
    while(i< num && j< num){
        if(arr[i]<= dep[j]){
            curr++; 
            i++; 
        }
        else if (arr[i]> dep[j]){
            curr--; 
            j++; 
        }
        res = max(curr, res);
    }
    return res; 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    int dep[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i]; 
    }
    for(int i =0; i< num; i++){
        cin >> dep[i]; 
    }
    cout << maxGuest(arr, dep, num); 
    return 0;
}