/* 
author: gulshan yadav
date: 17-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int pairSum(int arr[], int low, int high, int sum){
    while(low< high){
        if(arr[low]+arr[high] == sum) return true; 
        else if (arr[low] + arr[high]> sum) high--; 
        else if (arr[low]+ arr[high] < sum ) low++; 

    }
    return false; 
}

bool  tripletSum(int arr[], int  num, int sum ){
    int count = 0; 
    for(int i = 0; i< num; i++){
        if(pairSum(arr, i+1, num-1, sum-arr[i])){
            return true;
        }
    }
    return false; 
}
int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    int sum; 
    cin>> sum; 
    cout << tripletSum(arr, num, sum); 
    return 0; 
}