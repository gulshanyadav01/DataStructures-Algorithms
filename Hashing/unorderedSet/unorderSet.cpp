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
using namespace std;

int main(){
    unordered_set<int> s; 
    s.insert(10);
    s.insert(20);
    s.insert(30);
    for(auto it: s) cout << *it<< " "
    cout << s.size()<< "\n";
    return 0; 
}
