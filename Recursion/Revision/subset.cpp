/* 
author: gulshan yadav
date: 26-April-2021
*/
#include<iostream>
using namespace std;

void subset(string &str, string  curr = "", int i = 0){
    if(i == str.length()){
        cout << str << endl;
        return; 
    }
    subset(str, curr, i+1); 
    subset(str, curr + str[i], i+1); 

}

int main(){
    string str; 
    cin >> str; 
    subset(str); 
    return 0;
}