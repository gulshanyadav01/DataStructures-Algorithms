/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 22-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool matching(char a, char b){
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || a == '[' && b == ']'); 
}

bool parenthesisMatching(string &str){
    stack<char> s; 
    for(char x: str){
        if( x == '(' || x == '{' || x == '['){
            s.push(x);
        }
        else{
            if(s.empty() == true ){
                return false; 
            }
            else if ((matching(s.top(), x)) == false){
                return false; 
            }
            else{
                s.pop();
            }

        }
    }
    return (s.empty() == true);
}
int main(){
    string str; 
    cin >> str; 
    cout << parenthesisMatching(str);
    return 0; 
}