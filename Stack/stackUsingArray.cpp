/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 22-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

class MyStack{
    public: 
    int *arr; 
    int top; 
    int cap; 
    MyStack(int c){
        cap = c; 
        arr = new int[cap];
        top = -1; 
    }
    void push(int x){
        if(top == cap-1){
            cout <<"your stack is overflow";
            return;
        }
        top++; 
        arr[top] = x; 
    }
    int pop(){
        if(top== -1){
            cout << "your stack is empty";
            return INT_MIN;
        }
        int res = arr[top];
        top--; 
        return res; 
    }
    int peek(){
        if(top == -1){
            cout <<" your stack is empty"; 
            return INT_MIN;
        }
        return arr[top];
    }
    int size(){
        return top+1; 
    }
    bool isEmpty(){
        return (top == -1);;
    }

}; 
int main(){
    MyStack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    // cout << st.pop()<<endl;
    // cout << st.size()<<endl;
    // cout << st.isEmpty()<<endl;
    return 0; 
}
