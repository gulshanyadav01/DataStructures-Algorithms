/* 
author: gulshan yadav
date: 31-May-2021 
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int union1(int arr1[], int arr2[], int num1, int num2){
    int res= 1; 
    vector<int> d;
    d.push_back(arr1[0]); 
    for(int i = 1; i< num1; i++){
        bool flag= false; 
        for(int j = 0; j< d.size(); j++){
            if(d[j] == arr1[i]){
                flag = true; 
                break;
            }
        }
        if(!flag){
            d.push_back(arr1[i]);
            res++; 
        }

    }

    for(int i =0; i< num2; i++){
        bool flag = false; 
        for(int j = 0; j<d.size(); j++){
            if(d[j] ==arr2[i]){
                flag = true; 
                break;
            }
        }
        if(!flag){
            res++; 
            d.push_back(arr2[i]);
        }
    }
    // print the value 
    // for(int i = 0; i< d.size(); i++){
    //     cout << d[i]<<" "; 
    // }

    return res; 

}

// efficient solution 

int union2(int arr1[], int arr2[], int num1, int num2){
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
    cout << union1(arr1, arr2, num1, num2); 
    cout << endl;
    cout<< union2(arr1, arr2, num1, num2); 
    
    return 0;
}