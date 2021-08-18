/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 17-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void combinationSum(int index, int target, vector<vector<int>> &ans, vector<int> &arr, vector<int> &aux){

    if(target == 0){
        ans.push_back(aux);
        return; 
    }

    for(int i = index; i< arr.size(); i++){

        if(i > index && arr[i] == arr[i-1]) continue; 

        if(arr[i] > target) break; 

        aux.push_back(arr[i]); 
        combinationSum(i+1, target-arr[i], ans, arr, aux); 
        aux.pop_back(); 
    }
}


int main(){

    int num; 
    cin >> num; 
    vector<int> aux, arr; 
    vector<vector<int>> ans; 

    for(int i = 0; i< num; i++){
        int a; 
        cin >> a; 
        arr.push_back(a); 
    }
    cout<<"\n"; 
    cout << "enter target"<<endl;

    int target; 
    cin >> target; 

    combinationSum(0, target, ans, arr, aux); 

    // print the ans array 

    for(int i = 0; i< ans.size(); i++){

        for(int j = 0; j< ans[i].size(); j++){
            cout << ans[i][j] << " "; 
        }
        cout << "\n"; 
    }

    return 0; 

}