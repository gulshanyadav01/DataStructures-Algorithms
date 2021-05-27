/* 
author: *gulshan yadav*
date: 23-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<unordered_set>
#include<bits/stdc++.h>
using namespace std;


// we know the naive approach
// take two loop and traverse the array to find (arr1[i] + arr2[j] == sum)
// return true;
// it has the time complexity O(n^2)


// this is efficient approach time is O(n) and space is O(n)
bool pairSum(int arr[], int num, int sum ){
    unordered_set<int> s;
    for(int i = 0; i< num; i++){
        if(s.find(sum-arr[i]) != s.end()){
            return true;
        }
        s.insert(arr[i]);
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
    cin >> sum; 

    cout << pairSum(arr, num , sum);
    return 0;
}