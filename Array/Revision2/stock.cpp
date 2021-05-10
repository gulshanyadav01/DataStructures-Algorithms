/* 
author: gulshan yadav
date: 10-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int stock(int arr[], int num){
    int sum = 0;
    for(int i = 0; i< num-1; i++){
        if(arr[i]< arr[i+1]){
            sum += arr[i+1] - arr[i];
        }
    }
    return sum; 
}
int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
        
    }
    cout << stock(arr, num); 
    return 0; 
}