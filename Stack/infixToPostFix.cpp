/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 26-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c == '^'){
        return 3; 
    }
    else if(c == '/') return 2;
    else if (c == '*') return 2; 
    else if (c == '+' || c == '-') return -1; 
    else return -2; 
}

void infixToPostfix(string s){
    stack<char> st; 
    string result = "";
    for(int i = 0; i< s.length(); i++){
        char c = s[i];
        if((c >= 'a' && c<= 'z') || (c >= 'A' && c<= 'Z') || (c >= '0' && c<= '9')){
            result += s[i];
        }
        else if (c== '(') st.push('(');
        else if (c == ')'){
            while(st.top() != '(') {
                result += st.top(); 
                st.pop();
            }
            st.pop(); 
        }
        else{
            while (!st.empty() && prec(c) <= prec(st.top()))
            {
               result += st.top();
               st.pop(); 
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    cout << result<< endl;
}

int main(){
    string s; 
    cin >> s;
    infixToPostfix(s);
    return 0; 
}