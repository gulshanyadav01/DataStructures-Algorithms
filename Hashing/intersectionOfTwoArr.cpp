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

void  intersectionOfTwoArr(int arr1[], int arr2[], int num1, int num2){
    int res =0; 
    unordered_set<int> s;
    unordered_set<int>k; 
    for(int i = 0; i< num1; i++){
        s.insert(arr1[i]);
    }
    for(int i = 0; i< num2; i++){
        if(s.find(arr2[i]) != s.end()){
            res++; 
            k.insert(arr2[i]);
            s.erase(arr2[i]);

        }
    }
    // return res;
    // print the k th set
    for(auto x: k){
        cout << x<< "\n";
    }
}

int main(){
    int num1, num2; 
    cin >> num1 >> num2 ;
    int arr1[num1]; 
    int arr2[num2];
    for(int i = 0; i< num1; i++){
        cin >> arr1[i]; 
    }
    for(int i = 0; i< num2; i++){
        cin >> arr2[i]; 
    }
    intersectionOfTwoArr(arr1, arr2, num1, num2);
    return 0;
}