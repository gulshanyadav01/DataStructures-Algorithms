/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 21-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// this is the naive approach 
// Time : O(NK)
// Aux : O(N)
void kClosest(int arr[], int num, int k,int x ){

    // iter to the kth time
    bool visited[num] = {false};
    for(int i = 0; i< k; i++){

        
        int minDiff = INT_MAX; 
        int minInd; 
        for(int j = 0; j< num; j++){
            if((visited[j] == false) && (abs(arr[j]-x) <= minDiff)){
                minDiff = abs(arr[j]-x);
                minInd = j;

            }
        }
        // print the value 
        cout << arr[minInd]<<" ";
        visited[minInd] = true; 
    }
}


// efficieint solution 
void kClosest2(int arr[], int num, int k, int x){
    // create a max heap;
    priority_queue<pair<int, int>> pq; 

    for(int i = 0; i< k; i++){
        pq.push({abs(arr[i]-x), i});

    }

    for(int i = k; i< num; i++){
        int minDiff = abs(arr[i]-x); 
        if(pq.top().first > minDiff){
            pq.pop(); 
            pq.push({minDiff, i}); 
        }
    }
    // print the value 

    while(pq.empty() == false){
        cout << arr[pq.top().second]<< " ";
        pq.pop(); 
    }

}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i =0; i<  num; i++){
        cin >> arr[i]; 
    }
    int k, x; 
    cin >> k>> x; 
    kClosest(arr, num, k, x);
    cout << endl;
    kClosest2(arr, num, k, x); 
    return 0; 
}