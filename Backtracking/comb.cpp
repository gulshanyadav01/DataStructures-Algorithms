#include<iostream>

#include<bits/stdc++.h>

using namespace std; 

void combSum(int ind, int target, vector<int> ds, vector<vector<int>> ans , vector<int> arr){
    if(ds.size() == ind){
        if(target == 0){
            ans.push_back(ds);
    }
}
    if(arr[ind] < target){
        ds.push_back(arr[ind]); 
        combSum(ind, target-arr[ind], ds,ans,arr);
        ds.pop_back(); 
    }

    combSum(ind+1, target, ds, ans, arr); 

}

int main(){
    
}
    