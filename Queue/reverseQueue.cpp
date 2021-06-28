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

// reverse the queue using stack 

void reversing(queue<int> &q){
    if(q.empty()) return;
    int x = q.front();
    q.pop();
    reversing(q);
    q.push(x);
}

int main(){
    queue<int> q; 
    q.push(12);
    q.push(5);
    q.push(15);
    q.push(20);
    // while (q.empty() == false)
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    
    reversing(q); 
    while(q.empty() == false){
        cout << q.front() <<" ";
        q.pop();
    }
    return 0; 
}