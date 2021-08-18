/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 18-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subset(int index, vector<vector<int>> &ans, vector<int> &arr, vector<int> &aux){
    
        ans.push_back(aux); 
        

    for(int i = index; i< arr.size(); i++){
        if(i !=  index && arr[i] == arr[i-1]) continue;

        aux.push_back(arr[i]); 
        subset(i+1, ans, arr, aux); 
        aux.pop_back(); 
    }
}

int main(){

    int num; 
    cin >> num; 

    vector<int> aux, arr; 
    vector<vector<int>> ans; 
    for(int i = 0; i< num; i++){
        int a; 
        cin >> a; 
        arr.push_back(a); 
    }

    sort(arr.begin(), arr.end()); 

    subset(0, ans, arr, aux); 

    // printing the ans 

    for(int i =0; i< ans.size(); i++){
        for(int j = 0; j< ans[i].size(); j++){
            cout << ans[i][j]  << " "; 
        }
        cout <<endl;
    }
    return 0; 
}