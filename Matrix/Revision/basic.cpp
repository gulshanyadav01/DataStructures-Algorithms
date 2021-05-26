/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printMatrix(){
    int m= 3, n=2; 
    int **arr;
    arr = new int *[m]; 
    for(int i = 0; i< m; i++){
        arr[i] = new int[n]; 
    }
    for(int i = 0; i< m; i++){
        for(int j = 0; j< n; j++){
            arr[i][j] = 10; 
            cout << arr[i][j] << " "; 
        }
    }
}

void printMatrix2(){
    int m = 3; 
    int n = 2; 
    vector<vector<int>> v; 
    for(int i = 0; i< m; i++){
        vector<int> arr; 
        for(int j = 0; j< n; j++){
            arr.push_back(10);
        }
        v.push_back(arr);
        
    }
    // print the array 
    for(int i = 0; i< m; i++){
        for(int j = 0; j< n; j++){
            cout << v[i][j] << " "; 
        }
    }
}


int main(){
    int arr[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    }; 
    // for(int i = 0; i< 3; i++){
    //     for(int j = 0; j< 2; j++){
    //         cout << arr[i][j]<<" "; 
    //     }
    // }
    // printMatrix(); 
    printMatrix2(); 
    return 0;
}