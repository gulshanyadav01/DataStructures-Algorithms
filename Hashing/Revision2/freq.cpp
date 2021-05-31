/* 
author: gulshan yadav
date: 31-May-2021 
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// this is naive solution 
// time is O(N^2)
// space is O(1)

void frequency(int arr[], int num){
    for(int i = 0; i< num; i++){
        bool flag = false; 
        for(int j = 0; j< i; j++){
            if(arr[i] == arr[j]){
                flag = true; 
                break;
            }
        }
        if(flag){
            continue; 
        }
        int freq = 1; 
        for(int j = i+1; j< num; j++){
            if(arr[i] == arr[j]) freq++; 
             
        }
        cout << arr[i] << " " << freq <<" "<< endl;
    }
}

// efficient solution 
// create a hash map
void countFreq(int arr[], int num){
    unordered_map<int, int> h; 
    for(int i = 0; i< num; i++){
        h[arr[i]]++; 
    }
    for(auto x: h){
        cout << x.first << " "  << x.second <<endl;

    }
}

int main(){
    int num;
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    // frequency(arr, num);
     countFreq(arr, num); 
    return 0; 
}