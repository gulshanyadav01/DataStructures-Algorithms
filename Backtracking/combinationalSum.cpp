/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 17-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void combinationalSum(int ind, int target,  vector<vector<int>> &ans, vector<int> &arr, vector<int> &aux, int count, int rs){

    if(ind == arr.size()){
        if(target == 0){
            ans.push_back(aux);
            rs = min(rs, count);

        }
        return; 
    }
    int count = 0; 
    if(arr[ind]<= target){

        aux.push_back(arr[ind]); 
        combinationalSum(ind, target-arr[ind], ans, arr, aux); 
        aux.pop_back();

    }

    combinationalSum(ind+1, target, ans, arr, aux); 
}

int main(){
    int num; 
    cin >> num; 
    vector<int> arr;

    for(int i = 0; i< num; i++){
        int a; 
        cin >> a; 
        arr.push_back(a); 
        
    }

    vector<int> aux;  


    vector<vector<int>> ans; 

    cout << "enter target value"; 
    int target; 
    cin >> target; 

    combinationalSum(0, target, ans, arr, aux, 0, 0);

    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j< ans[i].size(); j++){
            cout << ans[i][j] <<" ";
        }
        cout << endl;
    }


}