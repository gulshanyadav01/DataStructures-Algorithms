#include<iostream>
#include<bits/stdc++.h>
using namespace std; 


void subset(string ip, string op, unordered_set<string > &st){

    if(ip.length() == 0){
       if(st.find(op) == st.end()){
           st.insert(op);

       }
       return; 
    }

    string op1 = op; 
    string op2 = op; 

    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0); 

    subset(ip, op1,st); 
    subset(ip, op2,st);
    return; 
}

int main(){

    unordered_set<string> st; 

    string ip, op = "";
    cin >> ip; 

    subset(ip, op, st);

    for(string x : st){
        cout << x << " "; 
    }
    return 0;  

}