/*
Author: "gulshan yadav"
Date: 24-oct-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// naive solution 

bool checkAnagram(string str1, string str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main(){
    string str1, str2; 
    cin >> str1; 
    cin >> str2; 
    cout << checkAnagram(str1, str2);
    return 0;
}