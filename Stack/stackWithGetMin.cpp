/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 25-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MyStack{
    public: 
    int top; 
    int *arr; 
    int cap; 
    int min;
    MyStack(int c){
        cap = c; 
        arr = new int[cap]; 
        top = -1; 
    }
    bool isEmpty(){
        return (top == -1); 
    }
    void push(int x){
        if(isEmpty()){
            top++; 
            arr[top] = x;
            min = x; 
        }
        else if (x<= min){
            min = x; 
            top++; 
            arr[top] = x-min; 
        }
        else{
            top++; 
            arr[top] = x; 
        }

    }

    void pop(){
        int t = arr[top];
        top --; 
        int res; 
        if(t <= 0){
            res = min; 
            min = min - t;
        }
    }

    int getMin(){
        return min; 
    }

}; 

int main(){
    MyStack s(10); 
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(2);
    s.push(6);
    s.push(4);
    s.pop();
    s.pop(); 
    s.push(2);
    s.pop(); 
    s.push(1); 
    cout << s.getMin() << endl;
    return 0; 
}