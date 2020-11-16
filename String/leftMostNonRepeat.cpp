/*
Author: "gulshan yadav"
Date: 24-oct-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;

int leftMostNonRepeat(string s) { 
    for(int i = 0; i< s.length(); i++){
        bool flag= false;
        for(int j= i+1; j< s.length(); j++){
            if(s[i] != s[j]) flag = true;
            else flag = false;
        }
        if(flag) return i; 
    }
    return -1; 
    
}

int main(){
    string s; 
    cin >> s; 
    cout << leftMostNonRepeat(s); 
    return 0;
}
return 0;