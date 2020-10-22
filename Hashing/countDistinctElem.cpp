/* 
author: *gulshan yadav*
date: 22-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<unordered_set>
#include<bits/stdc++.h>
using namespace std;

// this is naive solution it has the time complexity Q(n^2)

int countDistElem(int arr[], int num){
    int res = 0; 
    for(int i = 0; i< num; i++){
        bool flag = false;
        for(int j = i-1; j>= 0; j--){
            if(arr[i] == arr[j]){
                flag = true;
                break;

            }
        }
        if(flag== false){
            res++;
        }
    }
    return res; 
}

// this is implemented by unorderedset 
int countDistinctElem(int arr[], int num){
    unordered_set<int> s; 
    for(int i= 0; i< num; i++){
        s.insert(arr[i]);

    }
    return s.size();
}

int main(){
    int num; 
    cin >> num ;
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    // cout << countDistinctElem(arr, num);

    cout << countDistElem(arr, num);
    return 0;
    
}