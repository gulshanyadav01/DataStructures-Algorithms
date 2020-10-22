/* 
author: *gulshan yadav*
date: 22-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<unordered_set>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int > m;
    m["gulshan"] = 20;
    m.insert({"sudarshan",21});
    m.insert({"priyanka",22});

    for(auto x: m){
        cout << x.first << " " << x.second<< endl;
    }
    // to find a key if it is present 
    // then it not return the invalid iterator 
    // other it return the invalid iterator
    if(m.find("gulshn") != m.end()){
        cout << "found"<< "\n";
    }
    else{
        cout << "not found"<< "\n";
    }
    cout << m.size()<< endl;
    return 0; 
}
