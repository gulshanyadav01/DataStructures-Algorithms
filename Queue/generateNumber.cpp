/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 28-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void generateNumber(int n){
    queue<string> q;
    q.push("5");
    q.push("6");
    for(int i = 0; i< n; i++){
        string curr = q.front();
        cout << curr <<" ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6"); 

    }
}


int main(){
    int n; 
    cin >> n; 
    generateNumber(n);
    return 0; 
}