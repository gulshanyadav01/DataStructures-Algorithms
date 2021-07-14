/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 14-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

// new function

void someMoreFunction(){
    map<int, string> m; 
    m.insert({1, "gfg"});
    m.insert({5, "practice"});
    m.insert({2, "hello"});
    auto k = m.upper_bound(2);
    cout << (*k).first<<endl;
    for(auto it = m.find(2); it!= m.end(); it++){
        cout << (*it).first<<" "<< (*it).second<< endl;
    }
}

int main(){
    map<int, int> m; 
    m.insert({1, 100});
    m.insert({2, 200});
    m[5] = 500; 
    // this will give the default value 
    m[7];
    for(auto it = m.begin(); it!= m.end(); it++){
        cout << (*it).first<<" "<<(*it).second<< endl;
    }
    // cout << m.size()<<endl;
    someMoreFunction();
    return 0; 
}
