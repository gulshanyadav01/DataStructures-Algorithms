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

// naive approach
int unionOfTwoArray(int arr1[], int arr2[], int num1, int num2){
    int temp[num1 + num2]; 
    int index= 0; 
    int res = 0;
    for(int i =0; i< num1; i++){
        temp[index] = arr1[i];
        index++;
    }
    for(int j= 0; j< num2; j++){
        temp[index] = arr2[j];
        index++;
    }
    for(int i=0 ; i< index; i++){
        bool flag = false;
        for(int j= i-1; j>= 0; j--){
            if(temp[i] == temp[j]){
                flag= true;
                break;
            }
        }
        if(flag == false){
            res++;
        }
        
    }
    return res;
} 

// efficient solution 

int unionOfTwoArray2(int arr1[], int arr2[], int num1, int num2) {
    unordered_set<int> s; 
    for(int i = 0; i< num1; i++){
        s.insert(arr1[i]);
    }
    for(int i = 0; i< num2; i++){
        s.insert(arr2[i]);
    }
    return s.size();
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
    cout << unionOfTwoArray2(arr1, arr2, num1, num2);
    return 0;
}