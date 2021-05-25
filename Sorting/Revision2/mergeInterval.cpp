/* 
author: gulshan yadav
date: 25-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

void mergeInterval(vector<pair<int, int> > &arr){
    sort(arr.begin(), arr.end()); 

    int res = 0; 
    for(int i = 1; i< arr.size(); i++){
        if(arr[res].second >= arr[i].first){
            arr[res].second = max(arr[res].second, arr[i]. second); 
            arr[res].first = min( arr[res].first, arr[i].first); 
        }
        else{
            res++; 
            arr[res].first = arr[i].first; 
            arr[res].second = arr[i].second; 
        }

    }
    for(int i = 0; i<= res; i++){
        cout << arr[i].first << " " << arr[i].second; 
    }


}


int main(){
    int num; 
    cin >> num; 
    vector<pair<int, int> > arr; 
    for(int i = 0; i< num; i++){
        int a, b;
        cin >> a >> b; 
        arr.push_back(make_pair(a, b)); 
    }
    mergeInterval(arr); 


    

}