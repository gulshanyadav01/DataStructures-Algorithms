/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 28-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q){
    stack<int> s; 
    while(q.empty() == false){
        s.push(q.front());
        q.pop();
    }
    while(s.empty() == false){
        q.push(s.top());
        s.pop();
    }

    
}

int main(){
    queue<int> q; 
    q.push(10);
    q.push(20);
    q.push(30);
    reverse(q); 
    while(q.empty() == false){
        cout << q.front() <<" ";
        q.pop();
    }
    return 0; 
}