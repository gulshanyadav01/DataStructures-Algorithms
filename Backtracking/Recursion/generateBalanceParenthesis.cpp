#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void generateBalanced(int open, int close, string op, vector<string> &st){

    if(open == 0 && close == 0){
        st.push_back(op); 
        return ; 
    }

    if(open != 0){
        string out1 = op; 
        out1.push_back('('); 

        generateBalanced(open-1, close, out1, st); 
         
    }

    if(close > open ){
        string out2 = op; 
        out2.push_back(')'); 

        generateBalanced(open , close -1 , out2, st); 
         
    }
}

int main(){
    int n; 
    cin >> n; 
    int open = n; 
    int close = n; 

    vector<string> st; 

    string op  = ""; 

    generateBalanced(open, close, op, st); 

    for(string x : st){
        cout << x <<" ";
    }

    cout << st.size(); 
    return 0; 
}