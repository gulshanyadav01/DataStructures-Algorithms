/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 14-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

void ceilOnLeftSide(vector<int> &arr){
    cout << -1<<" ";
    for(int i = 1; i< arr.size(); i++){
        int res = INT_MAX; 
        for(int j = 0; j< i; j++){
            if(arr[j]>= arr[i]){
                res = min(res, arr[j]);
            }
        }
        if(res == INT_MAX){
            cout << -1<<" ";
        }
        else{
            cout << res<<" ";
        }
    }
}

// efficient solution 

void printCeiling(vector<int> &arr){
    cout << -1 <<" ";
    set<int> s; 
    s.insert(arr[0]);
    for(int i = 1; i< arr.size(); i++){
        if(s.lower_bound(arr[i]) != s.end()){
            cout << *(s.lower_bound(arr[i]))<<" ";
        }else{
            cout << -1<<" ";
        }
        s.insert(arr[i]);

    }
}

int main(){
    int num; 
    cin >> num;
    vector<int> arr; 
    for(int i = 0; i< num; i++){
        int k; 
        cin >> k; 
        arr.push_back(k);
    }
    ceilOnLeftSide(arr);
    cout << endl;
    printCeiling(arr);
    return 0; 
}