/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void spiralMatrix(vector<vector<int>> &arr){
    int top = 0, right = arr[0].size() -1, bottom = arr.size()-1, left = 0; 
    while(top<= bottom && left<= right){
        for(int i = left; i<= right; i++){
            cout << arr[top][i]<<" "; 
        }
        top++; 
        for(int i = top; i<= bottom; i++){
            cout << arr[i][right]<<" "; 
        }
        right--; 
        if(top<= bottom){
            for(int i= right; i>= left; i-- ){
                cout << arr[bottom][i]<<" "; 
            }
            bottom--; 
        }
        if(left<= right){
            for(int i = bottom; i>= top; i--){
                cout << arr[i][left]<<" "; 
            }
            left++; 
        }
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
    spiralMatrix(arr); 
    return 0; 
    
}