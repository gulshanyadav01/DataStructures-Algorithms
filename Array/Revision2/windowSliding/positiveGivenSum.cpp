/* 
author: gulshan yadav
date: 15-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSubSum(int arr[], int num, int sum){
    int currSum = arr[0];
    int start = 0; 
    for(int end = 1; end< num; end++){
        // clean the previous window
        while(currSum> sum && start< end-1){
            currSum -= arr[start]; 
            start++; 
        }
        if(currSum == sum) return true; 
        if(end< num-1){
            currSum += arr[end];
        }
    }
    return (currSum == sum);
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    int sum; 
    cin >> sum; 
    cout << isSubSum(arr, num, sum);
    return 0; 
}