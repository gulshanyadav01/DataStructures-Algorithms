/* 
author: gulshan yadav
date: 03-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void naivePatternSearch(string &txt, string &pat){
    int n = txt.length(); 
    int m = pat.length(); 
    for(int i = 0; i<= n-m; i++){
        int j; 
        for( j = 0; j<m; j++){
            if(pat[j]!= txt[i+j]) break;
        }
        if(j==m) cout << i<< " ";
    }
}

// if distinct character in pat then 
// we will use the naive better approach

void patSearch(string &txt, string &pat){
    int n = txt.length(); 
    int m = pat.length(); 
    for(int i =0; i<= n-m; ){
        int j; 
        for( j = 0; j< m; j++){
            if(txt[i+j] != pat[j]){
                break;
            } 
        }
        if(j == m) cout << i<<" ";
        if (j == 0 ) i++; 
        else {
            i+= j; 
        }
    }
}

int main(){
    string txt, pat; 
    cin >> txt>> pat; 
    naivePatternSearch(txt, pat); 
    cout << endl;
    patSearch(txt, pat); 
    return 0; 
}