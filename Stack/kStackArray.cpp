/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 24-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class  KStack{
    public: 
    int *arr; 
    int *top; 
    int *next; 
    int k, freetop, cap; 
    KStack(int k1, int n){
        cap = n; 
        arr = new int[cap];
        next = new int[cap];
        top = new int[k];
        k = k1; 
        for(int i = 0; i< k; i++){
            top[i] = -1; 
        }
        for(int i = 0; i< cap-1; i++){
            next[i] = i+1; 
        }
        next[cap-1] = -1; 
        freetop = 0; 
    }

    void push(int x, int sn){
        int i = freetop; 
        freetop = next[i];
        next[i] = top[sn];
        top[sn] = i; 
        arr[i] = x;
    }
    int pop(int sn){
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freetop;
        freetop = i; 
        return arr[i];
    }
};

int main(){
    KStack st(3, 6); 
    st.push(10, 0);
    st.push(20, 0);
    st.push(30, 0);
    st.push(40, 1);
    cout << st.pop(1)<<endl;
    return 0; 
}