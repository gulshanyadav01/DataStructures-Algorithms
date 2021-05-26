/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printBoundary( vector<vector<int>> &arr){
    int r = arr.size();
    int c = arr[0].size(); 
    if(r==1){
        for(int i =0; i< arr[0].size(); i++){
            cout << arr[0][i]<<" "; 
        }
    }
    else if (c==1){
        for(int i =0; i< arr.size(); i++){
            cout << arr[i][0]<<" "; 
        }
    }
    else{
        for(int i = 0; i< c; i++){
            cout << arr[0][i] <<" ";
        }
        for(int i = 1; i<r; i++ ){
            cout << arr[i][c-1]<<" "; 
        }
        for(int i = c-2; i>= 0; i--){
            cout << arr[r-1][i]<< " ";
        }
        for(int i = r-2; i>= 1; i--){
            cout << arr[i][0]<<" "; 
        }
    }
}

int main(){
    int m, n; 
    cin >> m >> n; 
    vector<vector<int>> arr; 
    for(int i =0; i< m; i++){
        vector<int> ar;
        for(int j = 0; j< n; j++){
            int a; 
            cin >> a; 
            ar.push_back(a);
        }
        arr.push_back(ar);
    }
    printBoundary(arr);
    return 0; 
}
