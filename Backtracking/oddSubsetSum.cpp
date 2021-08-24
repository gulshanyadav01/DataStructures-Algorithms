/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 18-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
static int ans = 0; 

void subsetSum(int index, vector<int> &arr, int sum){
    if(  sum % 2 != 0 ){
            
                ans += sum; 
            
            return;
    }

    int sum1 = sum; 
    int sum2 = sum; 

    sum1 += arr[index]; 

    subsetSum(index+1, arr, sum1); 
    subsetSum(index+1, arr, sum2); 
}


int main(){
    int num; 
    cin >> num; 
    vector<int> arr; 
    for(int i =0 ; i< num; i++){
        int a; 
        cin >> a; 
        arr.push_back(a); 
    }

    subsetSum(0, arr, 0);

    cout << ans <<endl;
    // sort(ans.begin(), ans.end()); 

    // for(int x: ans){
    //     cout << x << " "; 
        
    // } 
    return 0;
}