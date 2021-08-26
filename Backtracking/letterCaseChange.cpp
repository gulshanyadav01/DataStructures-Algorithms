/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 26-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void  letterCaseChange(string inp, string out, vector<string> &ans){

    if(inp.length() == 0){
        ans.push_back(out);
        return;
    }

    if(isalpha(inp[0])){

        string out1 = out; 
        string out2 = out; 

        out1.push_back(toupper(inp[0]));
        out2.push_back(tolower(inp[0])); 

        inp.erase(inp.begin() + 0); 

        letterCaseChange(inp, out1, ans);
        letterCaseChange(inp, out2, ans);

    }
    else {
        string out1 = out; 
        out1.push_back(inp[0]);
        inp.erase(inp.begin() + 0); 

        letterCaseChange(inp, out1, ans); 
    }
}

int main(){
    string inp, out; 
    cin >> inp; 

    out = ""; 
    vector<string> ans; 

    letterCaseChange(inp, out, ans);

    for(string x : ans){
        cout << x << " ";
    } 
    return 0; 
     
}
