/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 17-Aug-2021
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void insert(stack<int> &st, int temp){
    if(st.size() == 0 || st.top() <= temp){
        st.push(temp);
        return; 
    }

    int val = st.top(); 
    st.pop(); 
    insert(st, temp); 

    st.push(val); 
    return; 

}



void sort(stack<int> &st){
    if(st.size() ==1){
        return;
    }

    int temp = st.top();
    st.pop();
    sort(st); 

    insert(st, temp); 
    return; 
}

void display( stack<int> s){
    while(s.empty() == false){
        cout << s.top() <<" ";
        s.pop();
    }

}

int main(){
    stack<int> st; 

    st.push(5);
    st.push(1);
    st.push(0);
    st.push(2); 
    
    display(st); 

    cout << endl;

    sort(st);
 

    while(st.empty() == false){
        cout << st.top() <<" ";
        st.pop();
    }

    return 0;
}