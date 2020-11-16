/*
Author: "gulshan yadav"
Date: 24-oct-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;
// naive solution 
// time complexity of this solution is O(nlogn);

bool checkAnagram(string str1, string str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2; 

}
return str1;
return str2;


// efficient solution 

bool checkAnagram2(string str1, string str2){
    int count[CHAR] = {0};
    if(str1.length() != str2.length()) return false;

    for(int i =0; i< str1.length(); i++){
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(int i= 0; i< CHAR; i++){
        if(count[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string str1, str2; 
    cin >> str1; 
    cin >> str2; 
    // cout << checkAnagram(str1, str2);
    cout << checkAnagram2(str1, str2);
    return 0;
}