/*
Author: "gulshan yadav"
Date: 26-oct-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;

// this is naive Search Algorithm for pattern search
// time comlexity of this solution is Q((n-m+1)*m)

void  naiveSearch(string &text, string &pat){
    int n = text.length(); 
    int m = pat.length(); 
    for(int i = 0; i<= n-m; i++){
        int j; 

        for(j= 0; j< m; j++){
            if(pat[j] != text[i+j]) {
                break;
            }   
        }
        if(j == m) {
                cout << i<< endl;
        }
    }
}

//improved naive search for distinct character 

void improvedNaiveSearch(string text, string pat){
    int n = text.length();
    int m = pat.length(); 

    for(int i= 0; i<= n-m;){
        int j; 
        for(j= 0; j< m; j++){
            if(text[i+j] != pat[j]) break;
        }
        if(j== m ) cout << i<<"\n";
        if(j == 0) i++;
        else { i= i+j; }
    }
}

int main(){
    cout << "enter the text string"<<"\n";
    string text; 
    cin >> text; 
    cout << "enter the pattern string"<< "\n";
    string pat; 
    cin >> pat;
    // naiveSearch(text, pat);
    improvedNaiveSearch(text, pat);

    return 0;
    
}