/* 
author: gulshan yadav
date: 01-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


void moreThanNByK(int arr[], int num, int k){
    sort(arr, arr+num);
    int i = 1; 
    int count = 1; 
    while(i< num){
        while(i< num && arr[i] == arr[i-1]){
            count++; 
            i++; 
        }
        if(count > num/k){
            cout << arr[i-1]<<" ";
        }
        count = 1; 
        i++; 
    }
}

// efficient solution 

void moreThan(int arr[], int num, int k ){
    unordered_map<int, int> m; 
    for(int i =0; i< num; i++){
        m[arr[i]]++; 
    }
    for(auto x: m){
        if(x.second > num/k){
            cout << x.first<<" ";
        }
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    int k; 
    cin >> k; 
    moreThanNByK(arr, num, k); 
    cout << endl;
    moreThan(arr, num, k); 

    return 0; 
}
