/* 
author: gulshan yadav
date: 12-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majorityElem(int arr[], int num){
    for(int i = 0; i< num; i++){
        int count = 0; 
        for(int j = i; j< num; j++){
            if(arr[i] == arr[j]){
                count++; 
            }
        }
        if(count > num/2) return i; 
    }
    return -1; 
}

// efficient solution : Moore's voting algorithm

int majorElement(int arr[], int num){
    int count = 1, res = 0; 
    for(int i =1; i< num; i++){
        if(arr[res] == arr[i]) count++;
        else count--;
        if(count == 0){
            count = 1; 
            res = i;
        }
    }
    count = 0; 
    for(int i = 0; i< num; i++){
        if(arr[res] == arr[i])count++;
    }
    if(count > num/2 ){
        return res; 
    }
    else{
        return -1; 
    }
    
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i]; 
    }
    cout << majorityElem(arr, num); 
    cout << endl;
    cout << majorElement(arr, num); 
    return 0; 
}