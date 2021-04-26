/* 
author: gulshan yadav
date: 26-April-2021
*/
#include<iostream>
using namespace std;

bool isPalindrome(string str, int start, int end){

    if( start >= end){
        return true; 
    }
    return (str[start] == str[end])  && isPalindrome(str, start+1, end -1 );
}

int main(){
    string str; 
    cin >> str; 
    // cout << str.length(); 
    int k = str.length(); 
    cout << isPalindrome(str, 0, k-1); 
    return 0; 
}