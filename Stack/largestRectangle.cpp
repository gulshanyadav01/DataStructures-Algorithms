/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 25-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define R 4  
#define C 4

int largestHistogram(int arr[], int num){
    int res = 0; 
    stack<int> s; 
    for(int i = 0; i< num; i++){
        while(s.empty() == false && arr[s.top()] >= arr[i]){
            int tp = s.top(); 
            s.pop();
            int curr = arr[tp]*(s.empty() ? i : (i- s.top() -1 )); 
            res = max(curr, res);
        }
        s.push(i);
    }
    while(s.empty() == false){
        int tp = s.top();
        s.pop();
        int curr = arr[tp]*(s.empty() ? num: ( num- s.top() -1 )); 
        res = max(curr, res);
    }
    return res; 
}

int largestRectangle(int mat[R][C]) 
{ 
    int res = largestHistogram(mat[0],C); 
  
    for (int i = 1; i < R; i++) { 
  
        for (int j = 0; j < C; j++) 
            if (mat[i][j]) 
                mat[i][j] += mat[i - 1][j]; 

        res = max(res, largestHistogram(mat[i],C)); 
    } 
        return res;
}

int main(){
    int r,c;
    cin >> r >>c; 
    int row = r; 
    int col = c; 
    int mat[R][C]; 
    for(int i = 0; i< r; i++){
        for(int j= 0; j< c; j++){
            cin >> mat[i][j]; 
        }
    }
    cout << largestRectangle(mat); 
    return 0; 


}