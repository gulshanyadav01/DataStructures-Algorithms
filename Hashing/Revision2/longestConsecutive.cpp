/* 
author: gulshan yadav
date: 01-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution 
int longestConsecutive(int arr[], int num){
    sort(arr, arr+num); 
    int res = 1, curr = 1; 
    for(int i = 1; i< num; i++){
        if(arr[i] == arr[i-1]+1) {
            curr++; 
            res = max(curr, res); 
        }
        else if(arr[i]!= arr[i-1]){
            curr=1; 
        }
    }
    return res; 


}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }
    cout << longestConsecutive(arr, num);
    return 0; 
}