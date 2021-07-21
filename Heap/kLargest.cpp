/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 21-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void kLargest(int arr[], int num, int k){
    
    // build the min heap 
    priority_queue<int, vector<int> , greater<int>> pq; 
    
    // bulid the heap for k elem
    for(int i = 0; i< k; i++){
        pq.push(arr[i]);

    }
     
    // go to the k+1 to the last
    for(int i = k; i< num ; i++){
        if(pq.top() > arr[i]){
            continue; 
        }
        else {
            pq.pop(); 
            pq.push(arr[i]);
        }
    }

    // print the elements of the min heap
    while(pq.empty() == false){
            cout << pq.top()<<" "; 
            pq.pop();
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
    cin >>k; 
    kLargest(arr, num, k);
    return 0; 

}