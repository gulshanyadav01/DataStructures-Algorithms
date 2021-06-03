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

int leftMostNonRepeat(string &str){
    for(int i =0; i< str.length(); i++){
        bool flag = false; 
        for(int j = 0; j< str.length(); j++){
            if(i!= j && str[i]== str[j]){
                flag = true; 
                break;
            }
        }
        if(flag== false){
            return i; 
        }
    }
    return -1; 
}

// efficient solution 
int leftMostNonRepeating1(string &str){
    int fInd[256];
    int res = INT_MAX; 
    for(int i = 0; i< 256; i++){
        fInd[i] = -1; 
    }
    for(int i = 0; i< str.length(); i++){
        if(fInd[str[i]] == -1){
            fInd[str[i]] = i; 
        }
        else{
            fInd[str[i]] = -2; 
        }
    }
    for(int i =0; i< 256; i++){
        if(fInd[i] >= 0){
            res = min(res, fInd[i]); 
        }
    }
    return (res ==INT_MAX)?-1: res; 

}

int main(){
    string str;
    cin >> str; 
    cout << leftMostNonRepeat(str); 
    cout << endl;
    cout << leftMostNonRepeating1(str); 
    return 0; 
}