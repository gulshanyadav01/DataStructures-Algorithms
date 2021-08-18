/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 18-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void permutation(vector<int> &arr, vector<int> &aux, vector<bool> &freq, vector<vector<int>> &ans){
    
    if(aux.size() == arr.size()){
        ans.push_back(aux); 
        return; 
    }

    for(int i = 0; i< arr.size(); i++){
        if(freq[i] == false){
            freq[i] = true; 
            aux.push_back(arr[i]); 
            permutation(arr, aux, freq, ans); 
            freq[i] = false; 
            aux.pop_back(); 
        }
    }


}

int main(){

    int num; 
    cin >> num; 
    vector<int> aux, arr; 

    for(int i = 0; i< num; i++){
        int a; 
        cin >> a; 
        arr.push_back(a); 
    }

    vector<bool> freq(num, false); 

    vector<vector<int>> ans; 

    permutation(arr, aux, freq, ans); 

    // printing the ans array 

    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j< ans[i].size(); j++){
            cout << ans[i][j]<<" ";
        }
        cout << endl;
    }

    return 0; 
}