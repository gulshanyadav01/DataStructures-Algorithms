/*
Author: "gulshan yadav"
Date: 26-oct-2020
*/
#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
const int CHAR = 256;

// first reverse the word
// then reverse the whole array of character
// time complexity of this solution is Q(N^2)

void reverseString(string &s, int low, int high){
    while(low<= high){
        char temp  = s[low];
        s[low] = s[high]; 
        s[high] = temp;
        high--; 
        low++;
    }
}

void reverseWordInString(string &s){

    int start = 0; 
    for(int end = 0; end < s.length(); end++){
        // when space is encountered
        if(s[end] == ' '){
            reverseString(s, start, end-1);
            start = end+ 1;
        }

    }
    // the reverseString the last word 
    reverseString(s, start, s.length()-1); 
    reverseString(s, 0, s.length()-1); 
}

int main(){
    string s; 
    getline(cin, s); 
    cout << s<<"\n";
    reverseWordInString(s);
    cout << s<< "\n"; 
    return 0;
}