/* 
author: gulshan yadav
date: 31-May-2021 
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution 

int countDistintElem(int arr[], int num){
    int res =0; 
    for(int i = 0; i< num; i++){
        bool flag = false; 
        for(int j = 0; j< i; j++){
            if(arr[i] == arr[j]) {
                flag = true; 
                break;
            }

        }
        if(!flag) res++; 
    }
    return res; 

}

// efficient solution 

int countDistinct(int arr[], int num){
    unordered_set<int> s; 
    for(int i =0 ; i< num; i++){
        s.insert(arr[i]); 
    }
    return s.size(); 
}

int main(){
    int num;
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i]; 
    }
    // cout << countDistintElem(arr, num);
    cout << countDistinct(arr, num); 
    return 0; 
}