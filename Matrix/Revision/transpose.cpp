/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution would be the create a temp matrix;

void transpose(vector<vector<int>> &arr){
    for(int i = 0; i<= arr.size()-1; i++){
        for(int j = i+1; j< arr[0].size(); j++){
            int temp = arr[i][j]; 
            arr[i][j] = arr[j][i];
            arr[j][i] = temp; 
        }
    }
    for(int i =0; i< arr.size(); i++){
        for(int j = 0; j< arr[0].size(); j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}

int main(){
    int n; 
    cin >> n; 

    vector<vector<int>> arr; 
    for(int i =0; i< n; i++){
        vector<int> v; 
        for(int j = 0; j< n; j++){
            int a;
            cin >> a; 
            v.push_back(a);
        }
        arr.push_back(v); 
    }
    transpose(arr); 
    return 0; 
    
}