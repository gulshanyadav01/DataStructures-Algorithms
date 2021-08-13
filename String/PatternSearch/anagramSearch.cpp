/*
Author: "gulshan yadav"
Date: 05-Nov-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;


// to check the anagram 
// pat : pattern 
// text: whole string 
bool anagram(string text, string pat, int i ){
    int count[CHAR] = {0}; 

    for(int j = 0; j< pat.length(); j++ ) { 
        count[pat[j]]++; 
        count[text[i+j]]--; 
    }

    for(int i = 0; i<CHAR; i++){
        if(count[i]> 0){
            return false; 
        }
    }
    
    return true; 
}

// this is the naive approach 
// first check the anagram of window 
// if find then return true; 
bool anagramSearch(string text, string pat) { 
    int n = text.length(); 
    int m = pat.length(); 
    for(int i = 0; i<= n-m; i++){
        if(anagram(text, pat, i)) return true; 
    }
    return false; 
}






int main(){
    cout << "enter the text string"<<"\n";
    string text; 
    cin >> text; 
    cout << "enter the pattern string"<< "\n";
    string pat; 
    cin >> pat;
    // naiveSearch(text, pat);
    cout << anagramSearch(text, pat);

    return 0;
    
}

