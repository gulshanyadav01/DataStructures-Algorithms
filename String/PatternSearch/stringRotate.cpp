/*
Author: "gulshan yadav"
Date: 05-Nov-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define d 256

void stringRotate(string str, string str1) {

    int n = str.length(); 
    while(n--){
        char temp = str[0]; 
        int i; 
        for(i = 1; i< str.length(); i++){
            str[i-1] = str[i]; 
        }
        str[i-1] = temp; 
        if(str == str1) cout << "yes"; 
    } 

}

int main(){
    string str; 
    cin >> str; 
    string str1; 
    cin >> str1; 
    stringRotate(str, str1); 
    return 0; 
}