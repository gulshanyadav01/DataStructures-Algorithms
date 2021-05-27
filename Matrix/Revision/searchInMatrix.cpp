/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void searchInMatrix(vector<vector<int>> &arr, int x){
    bool flag = false; 
    for(int i =0; i< arr.size(); i++){
       
        for(int j = 0; j< arr[i].size(); j++){
            if(arr[i][j] == x){
                flag = true; 
                cout << "found at "<< i <<" " << j << " "; 
                break;
            }
        }

        
    }
    if(!flag){
        cout << "not found"; 
    }
}

// efficient solution 

void search2(vector<vector<int>> &arr, int x){
    int i = 0; 
    int j = arr[0].size()-1; 
    while(i< arr.size()-1 && j>= 0){
        if(arr[i][j] == x){
            cout << "found at" << i << " " << j; 
            return; 
        }
        else if(arr[i][j] > x){
            j--; 
        }
        else{
            i++; 
        }
    }
    cout << "not found"; 
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
    int x; 
    cin >> x; 
    search2(arr, x); 
    return 0; 
    
}