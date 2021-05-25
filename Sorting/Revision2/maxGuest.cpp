/* 
author: gulshan yadav
date: 25-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

int maxGuest(int arr[],int dep[],  int num){
    sort(arr, arr+num); 
    sort(dep, dep+num); 
    int i =1, j= 0; 
    int res= 1, curr= 1; 
    while(i<num && j< num){
        if(arr[i]<= dep[j]){
            curr++; 
            i++; 
        }
        else if(arr[i]> dep[j]){
            curr--; 
            j++; 
        }
        res =  max(res, curr);
    }
    return res; 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    int dep[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    for(int i = 0; i< num; i++){
        cin >> dep[i]; 
    }
    cout << maxGuest(arr, dep, num); 
    return 0; 
}