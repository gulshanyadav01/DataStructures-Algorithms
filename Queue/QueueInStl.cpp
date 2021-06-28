/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 28-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    while(q.empty() == false){
        cout << q.front() <<" "<< q.back()<<endl;
        q.pop();
    }
    return 0; 
}