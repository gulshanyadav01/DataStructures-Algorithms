/* 
author: gulshan yadav
date: 15-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int maxElement(int l[], int r[], int num){
    int  arr[1000]; 
    for(int i = 0; i< num; i++){
        l[arr[i]]++; 
        r[arr[i]+1]--; 
    }
    int max = arr[0], res = 0; 
    for(int i = 1; i< 1000; i++){
        arr[i] += arr[i-1]; 
        if(max< arr[i]){
            max = arr[i]; 
            res = i;

        }
    }
    return res; 
    
}

int main(){
    int num; 
    cin >> num; 
    int l[num], r[num];
    for(int i =0; i< num; i++){
        cin >> l[i];
    }
    for(int i =0; i< num; i++){
        cin >> r[i];
    }
    cout << maxElement(l, r , num); 
    return 0; 

}