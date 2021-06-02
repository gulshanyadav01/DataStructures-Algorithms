/* 
author: gulshan yadav
date: 02-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution would be : 
// create all subsequence and compare
// Time : O(2^N * N); 
// space: O(1); 


// efficient solution 
// time : O(N+M)
bool subSequence(string &s1, string &s2){
    int n = s1.size(); 
    int m = s2.size(); 
    int i = 0, j=0; 
    while(i< n && j< m){
        if(s1[i] == s2[j]){
            i++; 
            j++;
        }
        else{
            i++; 
        }
    }
    return (j==m); 
}

int main(){
    string s1, s2; 
    cin >> s1 >> s2; 
    cout << subSequence(s1, s2); 
    return 0; 
}