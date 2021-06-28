/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 28-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MyStack{
    public:
    queue<int> q1;
    queue<int> q2; 
    int size; 
    MyStack(){
        size = 0; 
    }

    void pushed(int x){
        while(q1.empty() == false){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(q2.empty() == false){
            q1.push(q2.front());
            q2.pop();
        }
        size++; 
    }

    int stackTop(){
        return q1.front(); 
    }
    int getSize(){
        return size; 
    }

};

int main(){
    MyStack st; 
    st.pushed(10);
    st.pushed(20);
    cout << st.stackTop()<<endl;
    cout << st.getSize(); 

}