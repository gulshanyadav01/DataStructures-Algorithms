/* 
author: *gulshan yadav*
date: 22-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<unordered_set>
#include<bits/stdc++.h>
using namespace std;

// this is naive solution and this has the time complexity 
// Q(n^2);
void  countFreqOfElem(int arr[], int num){
    for(int i = 0; i< num; i++){
        bool flag = false;
        for(int j = i-1; j>= 0; j--){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        if(flag == true) continue;

        int freq= 0; 
        for(int j = 0; j< num; j++){
            if(arr[i] == arr[j]){
                freq++;
            }
        }
        cout << arr[i] << " " << freq << "\n";
    }
}

// efficient approach by unordered map 
// time : O(n)
// space: O(n)

void printFreqOfElem(int arr[], int num){
    unordered_map<int, int> m; 
    for(int i = 0; i< num; i++){
        m[arr[i]]++;
    }
    for(auto x: m){
        cout << x.first << " " << x.second << "\n";
    }
}

int main(){
    int num; 
    cin >> num ;
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    //  countFreqOfElem(arr, num); 
     printFreqOfElem(arr, num);
    return 0;
}