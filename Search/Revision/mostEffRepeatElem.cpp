/* 
author: "gulshan yadav"
date: 27-NOV-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int mostEffectRepeatingElem(int arr[], int num){
    int slow = arr[0];
    int fast = arr[0]; 
    do{
        slow = arr[slow]; 
        fast = arr[arr[fast]]; 

    }
    while(slow != fast); 
    slow = arr[0]; 
    while(slow != fast){
        slow = arr[slow]; 
        fast = arr[fast]; 
    }
    return slow; 
}

int main(){
    int num; 
    cin >> num;
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    cout << mostEffectRepeatingElem(arr, num); 
    return 0; 
}