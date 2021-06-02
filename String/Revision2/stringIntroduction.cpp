/* 
author: gulshan yadav
date: 02-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printString(string &str){
    int count[26]={0}; 
    for(int i = 0; i< str.length(); i++){
        count[str[i]-'a']++; 
    }

    for(int i =0; i< 26; i++){
        if(count[i]> 0){
             cout << (char)(i+'a')<<" " << count[i]<<endl;
        }
       
    }


}
int main(){
    string str;
    getline(cin, str);  
    printString(str); 
    return 0; 

}
