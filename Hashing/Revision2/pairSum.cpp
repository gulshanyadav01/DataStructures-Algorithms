/* 
author: gulshan yadav
date: 31-May-2021 
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution; 
bool isPair(int arr[], int num, int sum){
    for(int i =0 ; i< num; i++){
        for(int j = i+1; j< num; j++){
            if(arr[i]+ arr[j] == sum) return true; 
        }
    }
    return false; 
    
}

// efficient solution 

bool pairSum(int arr[], int num, int sum){
    unordered_set<int> h;
    for(int i = 0; i< num; i++){
        if(h.find(sum-arr[i]) != h.end()){
            return true; 
        }
        else{
            h.insert(arr[i]); 
        }
    }
    return false; 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    int sum; 
    cin >> sum; 
    cout << isPair(arr, num, sum);
    cout << endl;
    cout << pairSum(arr, num, sum); 
    return 0; 
}
