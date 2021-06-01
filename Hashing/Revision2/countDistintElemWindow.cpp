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

void count(int arr[], int num, int k){
    for(int i = 0; i<= num-k; i++){
        int count = 0; 
        for(int j = 0; j<k; j++){
            bool flag = false; 
            for(int p = 0; p< j; p++){
                if(arr[i+j] == arr[i+p]){
                    flag = true; 
                    break;
                }
            }
            if(!flag){
                count++; 
            }
        }
        cout << count<<" "; 
    }
}


void countDistinct(int arr[], int num, int k ){
    unordered_map<int, int> m; 
    for(int i =0; i< k; i++){
        m[arr[i]]++;  
    }
    cout << m.size()<<" ";
    for(int i = k; i< num; i++){
        m[arr[i-k]]--; 
        if(m[arr[i-k]] == 0){
            m.erase(arr[i-k]); 
        }
        if(m.find(arr[i]) == m.end()){
            m.insert({arr[i], 1}); 
        }
        else if (m.find(arr[i]) != m.end()){
            m[arr[i]]++; 

        }
        cout << m.size()<< " ";
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }
    int k; 
    cin >> k; 
    countDistinct(arr, num, k); 
    cout << endl;
    count(arr, num, k); 
    return 0; 
}