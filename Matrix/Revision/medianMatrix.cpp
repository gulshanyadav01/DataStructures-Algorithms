/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int medianMatrix(vector<vector<int>> &arr){
    int r = arr.size(); 
    int c = arr[0].size(); 
    int temp[r*c]; 
    int ind = 0; 
    for(int i =0; i< arr.size(); i++){
        for(int j = 0; j< arr[0].size(); j++){
            temp[ind++]  = arr[i][j];
        }
    }
    sort(temp, temp+ind); 
    return temp[ind/2]; 

}
int main(){
    int n, m; 
    cin >> n >> m;

    vector<vector<int>> arr; 
    for(int i =0; i< n; i++){
        vector<int> v; 
        for(int j = 0; j< m; j++){
            int a;
            cin >> a; 
            v.push_back(a);
        }
        arr.push_back(v); 
    }
    
   cout <<  medianMatrix(arr); 
    return 0; 
    
}