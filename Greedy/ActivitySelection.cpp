 /*
author:gulshan yadav
email: gulshany01@gmail.com
date: 12-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool myComp(pair<int, int> a, pair<int, int> b){
    return (a.second < b.second); 
}

int maxActivitySelect(vector<pair<int, int>> &arr){

    int res = 1; 
    int prev = 0; 
    sort(arr.begin(), arr.end(), myComp); 

    for(int curr = 1; curr<= arr.size(); curr++){
        if(arr[curr].first >= arr[prev].second){
            res++; 
            prev = curr; 
        }
    }
    return res; 


}

int main(){
    int n; 
    cin >>  n; 
    vector<pair<int, int>> arr; 

    while(n--){
        int a, b; 
        cin >> a >> b; 
        arr.push_back(make_pair(a,b)); 
    }

    cout << maxActivitySelect(arr); 
    return 0; 
    
}

