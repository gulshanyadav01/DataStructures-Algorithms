/* 
author: gulshan yadav
date: 31-May-2021 
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int intersection(int arr1[], int arr2[], int num1, int num2){
    int res = 0; 
    for(int i =0; i< num1; i++){
        bool flag = false; 
        for(int j = 0; j< i; j++){
            if(arr1[i] == arr1[j]){
                flag = true; 
                break;
            }
        }
        if(flag)continue; 
        for(int k = 0; k< num2; k++){
            if(arr1[i] == arr2[k]){
                res++; break;
            }
        }
    }
    return res; 

}

// efficient solution

int countIntersection(int arr1[], int arr2[], int num1, int num2){
    int res = 0; 
    unordered_set<int> sa; 
    unordered_set<int> sb; 

    for(int i =0; i< num1; i++){
        sa.insert(arr1[i]);
    }
    for(int i = 0; i< num2; i++){
        sb.insert(arr2[i]); 
    }
    for(auto x: sa){
        if(sb.count(x)> 0) res++; 
    }
    return res;
}

// more efficient solution 

int countInter(int arr1[], int arr2[], int num1, int num2){
    int res =0; 
    unordered_set<int> sa; 
    for(int i = 0; i< num1; i++){
        sa.insert(arr1[i]);
    }
    for(int i =0; i< num2; i++){
        if(sa.count(arr2[i])){
            res++; 
            sa.erase(arr2[i]); 
        }
    }
    return res; 
}

int main(){
    int num1,num2 ;
    cin >> num1 >> num2;
    int arr1[num1];
    int arr2[num2];
    for(int i= 0; i< num1; i++){
        cin>> arr1[i];
    }
    for(int i=0; i<num2; i++){
        cin >> arr2[i];
    }
    // cout << intersection(arr1, arr2, num1, num2);
    cout << countIntersection(arr1, arr2, num1, num2);
    cout << endl;
    cout << countInter(arr1, arr2, num1, num2);
    return 0;
}