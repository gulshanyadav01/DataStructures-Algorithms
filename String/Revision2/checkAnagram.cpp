/* 
author: gulshan yadav
date: 02-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution
// idea: sorting the string and check if same then true
// else false
// Time Q(nlogn)

bool checkAnagram(string &s1, string &s2){
    if(s1.length()!= s2.length()) return false; 
    sort(s1.begin(), s1.end()); 
    sort(s2.begin(), s2.end()); 
    return s1==s2; 
}

// efficient solution 

bool checkAnagram2(string &s1, string &s2){
   int  count[256] = {0}; 
    for(int i = 0; i< s1.length(); i++){
        count[s1[i]]++; 
        count[s2[i]]--; 
    }
    for(int i =0; i< 256; i++){
        if(count[i]!= 0) return false; 
    }
    return true; 
}

int main(){
    string s1, s2; 
    cin>>s1>> s2; 
    cout << checkAnagram(s1, s2);
    cout<<endl;
    cout << checkAnagram2(s1, s2); 
    return 0;
}