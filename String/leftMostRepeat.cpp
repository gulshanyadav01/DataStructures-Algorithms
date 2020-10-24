/*
Author: "gulshan yadav"
Date: 24-oct-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;

// naive solution 
int leftMostRepeat(string s){
    int res = 0;
    for(int i = 0; i< s.length()-1; i++){
        for(int j = i+1; j< s.length(); j++){
            if(s[i] == s[j])  return i; 
        }
    }
    return -1; 
}
int main(){
    string s; 
    cin >> s; 
    cout << leftMostRepeat(s);
    return 0;
}