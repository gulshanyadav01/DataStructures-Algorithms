/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 19-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    // this is max heap; 
    priority_queue<int> pq; 
    // this is min heap
    priority_queue<int, vector<int> , greater<int> > p;
    p.push(10); 
    p.push(20);
    p.push(30); 
    cout << p.top()<<endl;
    while(p.empty() == false){
        cout << p.top()<<" "; 
        p.pop(); 
    }
    return 0; 
}