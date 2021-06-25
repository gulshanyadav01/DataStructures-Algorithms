/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 24-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class TwoStack{
    public:
    int *arr;
    int cap;
    int top1; 
    int top2; 
    TwoStack(int c){
        cap = c; 
        arr = new int[cap];
        top1 = -1; 
        top2 = cap; 
    }
    void push1(int x){
        if(top1< top2-1){
            top1++; 
            arr[top1] = x; 
        }
    }
    void push2(int x){
        if(top1< top2-1){
            top2--; 
            arr[top2] = x; 
        }
    }
    int pop1(){
        if(top1 >= 0){
            int x = arr[top1];
            top1--; 
            return x; 
        }
        else{
            exit(1);
        }
    }
    int pop2(){
        if(top2 < cap){
            int x = arr[top2];
            top2++;
            return x; 
        }else{
            exit(1);
        }
    }

};

int main(){
    TwoStack st(5); 
    st.push1(10);
    st.push1(1);
    st.push1(2);
    st.push1(3);
    st.push2(20);
    st.push1(25);// this element may be over flowen
    cout << st.pop1()<<endl;
    cout<< st.pop2()<<endl;
    return 0; 
}