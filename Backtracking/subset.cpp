#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void subsetSum(int index, vector<int> &arr, vector<int> &out, vector<vector<int>> &ans){

    // base condition 
    if(index == arr.size()){
        ans.push_back(out); 
        return; 
    }

    // hypothesis and induction 
    vector<int> out1 = out; 
    vector<int> out2 = out; 

    out1.push_back(arr[index]);
    
    subsetSum(index+1, arr, out1, ans); 
    subsetSum(index+1, arr, out2, ans); 
}


int main(){
    int num; 
    cin >> num; 
    vector<int> arr; 
    vector<vector<int>> ans;  
    vector<int> out;
    // out.push_back(""); 
    for(int i =0 ; i< num; i++){
        int a; 
        cin >> a; 
        arr.push_back(a); 
    }

    subsetSum(0, arr, out, ans);

    sort(ans.begin(), ans.end()); 

    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j< ans[i].size(); j++){
            cout << ans[i][j] << " "; 
        }
        cout<< endl;
    } 
    return 0;
}