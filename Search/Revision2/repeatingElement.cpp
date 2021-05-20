/* 
author: gulshan yadav
date: 20-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// super naive solution would be 

int repeatingElement1(int arr[], int num){
    for(int i = 0; i< num; i++){
        for(int j = i+1; j< num; j++){
            if(arr[i] == arr[j]) return arr[i];
        }
    }
}
int main(){
    int num; 
    cin >>  num;
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << repeatingElement1(arr,  num); 
    return 0; 
}