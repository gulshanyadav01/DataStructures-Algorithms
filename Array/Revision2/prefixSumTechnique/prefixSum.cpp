/* 
author: gulshan yadav
date: 15-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int prefixSum(int arr[], int num, int l, int r){
    int prefixS[num];
    prefixS[0] = arr[0];
    for(int i = 1; i< num; i++){
        prefixS[i] = arr[i]+ prefixS[i-1];
    }
    // now the prefix array is ready
    if(l!=0){
        return prefixS[r] - prefixS[l-1];
    }
    else{
        return prefixS[r];
    }
    
    
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << "enter the ranges"<< endl;
    int l,r ;
    cin >> l>> r; 
    cout << prefixSum(arr, num, l, r ); 
    return 0; 
}