/*
Author: "gulshan yadav"
Date: 24-oct-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;

// naive solution 
// time complexity O(n^2)
int leftMostRepeat(string s){
    int res = 0;
    for(int i = 0; i< s.length()-1; i++){
        for(int j = i+1; j< s.length(); j++){
            if(s[i] == s[j])  return i; 
        }
    }
    return -1; 
}

// efficient solution 

int leftMostRepeat2(string s){
    int count[CHAR] = {0};
    for(int i = 0; i< s.length(); i++){
        count[s[i]]++;
    }
    for(int i = 0; i< s.length(); i++){
        if(count[s[i]] > 1){
            return i;
        }
    }
    return -1;
}

// second most efficinet solution 

int leftMostRepeat3(string s){
    int res = INT_MAX;
    int fIndex[CHAR]; 
    fill(fIndex, fIndex+ CHAR, -1); 
    for(int i =0; i< s.length(); i++){
        int f = fIndex[s[i]]; 

        if(f == -1 ){
            fIndex[s[i]] = i; 
        }
        else {
            res = min(res, f);
        }
    }
    return ( res == INT_MAX) ? -1: res; 
}

// third most efficient solution 

int leftMostRepeat4(string s ){
    int res = -1; 
    int visited[CHAR]; 
    fill(visited, visited+CHAR, false);
    for(int i = s.length()- 1; i>= 0; i--) {
        if(visited[s[i]]) res = i; 
        else { visited[s[i]] = true; }
    }
    return res; 
}

int main(){
    string s; 
    cin >> s; 
    cout << leftMostRepeat4(s);

    return 0;
}
return 0;