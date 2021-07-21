/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 19-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

// naive solution is sort the given array: O(n*logn)

// this is efficient solution 
void  kSortedArray(int arr[], int num, int k ){
    // create the min heap
    priority_queue<int, vector<int>, greater<int> > pq; 

    // put k elements into min heap
    for(int i = 0; i<= k; i++){
        pq.push(arr[i]); 
    }
    
    // initialize a varialbe index = 0; 
    int index = 0; 

    // traverse the remaining element and put them into heap and array

    for(int i = k+1; i< num; i++){
        arr[index++] = pq.top();
        pq.pop(); 
        pq.push(arr[i]);
    }

    // put the remaining elements in array to the heap 
    while(pq.empty() == false){
        arr[index++] = pq.top(); 
        pq.pop();
    }

}

int main(){
    int num; 
    cin >> num; 
    int * arr  = new int[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    int k ;
    cin >> k; 
    kSortedArray(arr, num, k); 
    // print the array; 
    for(int i = 0; i< num; i++){
        cout << arr[i]<<" ";
    }
    return 0; 
}