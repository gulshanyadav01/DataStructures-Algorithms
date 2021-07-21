/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 21-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int purchasingMaxItem(int arr[], int num, int sum){
    // build the min heap; 
    priority_queue<int, vector<int>, greater<int>> pq; 

    // push all element into heap; 
    for(int i = 0; i< num; i++){
        pq.push(arr[i]); 
    }

    int res = 0; 
    while(pq.empty() == false){
        if(pq.top()<= sum){
            res++; 
            sum = sum-pq.top();
            pq.pop(); 
        }
        else{
            break;
        }
    }
    return res; 

}

int main(){
    int num; 
    cin >> num; 
    int *arr = new int[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    int sum; 
    cin >> sum; 

    cout << purchasingMaxItem(arr, num, sum);
    return 0; 

}