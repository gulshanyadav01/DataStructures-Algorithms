/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


void snakePattern(vector<vector<int>> &arr){
    for(int i = 0; i< arr.size(); i++){
        if(i%2 == 0){
            for(int j = 0; j< arr[i].size(); j++){
                cout << arr[i][j]<<" "; 
            }
        }
        else{
            for(int j = arr[i].size()-1; j>= 0;  j--){
                cout << arr[i][j]<<" "; 
            }

        }
    }
}

int main(){
    int m,n;
    cin >> m>>n; 
    vector<vector<int>> arr; 
    for(int i = 0; i< m; i++){
        vector<int> v; 
        for(int j = 0; j< n; j++){
            int a;
            cin >> a; 
            v.push_back(a); 
        }
        arr.push_back(v);
    }
    snakePattern(arr);
    return 0; 

}