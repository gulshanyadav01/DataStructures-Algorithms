/* 
author: gulshan yadav
date: 03-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void reverse(string &str, int low, int high ){
    while(low<= high){
        char temp = str[low]; 
        str[low] = str[high]; 
        str[high] = temp; 
        low++; 
        high--; 
    }
}

void reverseWord(string &str){
    int start = 0; 
    for(int end = 0; end<str.length(); end++){
        if(str[end] ==' '){
            reverse(str, start, end-1);
            start = end+1; 
        }
    }
    reverse(str, start, str.length()-1); 
    reverse(str, 0, str.length()-1); 
}

int main(){
    string str; 
    getline(cin, str); 
    cout << str <<" "; 
    reverseWord(str); 
    cout << endl;
    cout << str<<" "; 
    return 0; 

}