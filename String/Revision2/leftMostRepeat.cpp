/* 
author: gulshan yadav
date: 03-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution 

int leftMost1(string &s1){
    for(int i =0; i< s1.length(); i++){
        for(int j = i+1; j< s1.length(); j++){
            if(s1[i] == s1[j]) return i; 
        }
    }
    return -1; 
}

// better approach

int leftMost2(string &s1){
    int count[256] = {0}; 
    for(int i = 0; i< s1.length(); i++){
        count[s1[i]]++; 
    }
    for(int i = 0; i< s1.length(); i++){
        if(count[s1[i]]>1) return i; 
    }
    return -1; 
}

// efficient solution

int leftMost3(string &s1){
    int fIndex[256]; 
    for(int i = 0; i< 256; i++){
        fIndex[i] = -1; 
    }
    int res = INT_MAX; 
    for(int i =0; i<s1.length(); i++){
        int fi = fIndex[s1[i]]; 
        if(fi== -1){
            fIndex[s1[i]] = i; 
        }
        else{
            res = min(res, fi); 
        }
    }
    return (res== INT_MAX)?-1: res; 

}

int main(){
    string s1;
    cin >> s1; 
    cout << leftMost1(s1); 
    cout << endl;
    cout << leftMost2(s1); 
    cout << endl;
    cout << leftMost3(s1);
    return 0; 
}