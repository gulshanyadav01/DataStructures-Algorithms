/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


// naive solution 
// Time Q(N^2); 
// Space Q(N^2);
void rotate90(vector<vector<int>> &arr){
    int n = arr.size(); 
    int temp[n][n];
    for(int i = 0; i< arr.size(); i++){
        for(int j = 0; j< arr[i].size(); j++){
            temp[n-j-1][i] = arr[i][j]; 
        }
    }
    for(int i =0; i< n; i++){
        for(int j = 0; j< n; j++){
            cout << temp[i][j] << " ";
        }
        cout << endl;

    }

}

// efficient solution 

void rotate(vector<vector<int>> &arr){
    int n = arr.size(); 
    
    // first do the transpose 
    for(int i = 0; i< arr.size(); i++){
        for(int j = i+1; j< arr[i].size(); j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp; 
        }
    }
    // transpose is done 
    // now reverse the individual column
    for(int i = 0; i<arr.size(); i++){
        int low = 0; 
        int high = arr[0].size()-1;
        while(low< high){
            int temp = arr[low][i];
            arr[low][i] = arr[high][i];
            arr[high][i] = temp; 
            low++; 
            high--; 
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
    rotate(arr); 
    for(int i =0; i< n; i++){
        for(int j = 0; j< n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }
    return 0; 
    
}