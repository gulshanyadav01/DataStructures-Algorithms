/* 
author: gulshan yadav
date: 31-May-2021 
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    unordered_map<string, int > m; 
    m["gulshan"]= 20; 
    m.insert({"yadav", 10}); 
    if(m.find("gulshan") != m.end()){
        cout << "found"<<endl;
    }
    else{
        cout <<" not found " << endl;
    }
    for(auto x: m){
        cout << x.first<<" " << x.second << " "; 
    }
    for(auto it = m.begin();  it!= m.end(); it++){
        cout << it->first << " " << it->second<<" "; 
    }
    cout << m.size(); 
    return 0;
}