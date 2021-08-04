/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 03-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"; 

int main(){
    vector<string> s;
    for(int i = 0; i< 5; i++){
        string k; 
        cin >> k; 
        s.push_back(k);
    }
    for(int i = 0; i< 5; i++){
        cout << s[i] << " ";
    }
    return 0; 
}