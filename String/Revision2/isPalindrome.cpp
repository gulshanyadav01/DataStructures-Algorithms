/* 
author: gulshan yadav
date: 02-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Naive solution 
// Time O(N)
// Space O(N)
bool isPalindrome(string &str){
    string rev = str; 
    reverse(rev.begin(), rev.end()); 
    return (rev==str); 
}

// Efficient solution 
// Time O(N)
// Space O(1)
bool isPal(string &str){
    int begin = 0; 
    int end = str.length()-1; 
    while(begin<= end){
        if(str[begin]!= str[end]) return false; 
        begin++; 
        end--;
    }
    return true; 
}

int main(){
    string str; 
    getline(cin, str);
    cout << isPalindrome(str); 
    cout << endl;
    cout << isPal(str); 
    return 0; 
}