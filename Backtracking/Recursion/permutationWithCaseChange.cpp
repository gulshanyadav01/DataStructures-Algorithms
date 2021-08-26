#include<iostream>
#include<bits/stdc++.h>
using namespace std; 


void  permutation(string inp, string out){

    if(inp.length() == 0){
        cout << out <<" "; 
        return ; 
    }

    string out1 = out; 
    string out2 = out; 

    out1.push_back(inp[0]);
    out2.push_back(inp[0]-32);
     
    inp.erase(inp.begin() + 0); 

    permutation(inp, out1);

    permutation(inp, out2); 

}

int main(){

    string inp, out = "";
    cin >> inp; 

    permutation(inp, out); 

    return 0; 

}