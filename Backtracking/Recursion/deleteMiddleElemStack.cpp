/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 17-Aug-2021
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void solve(stack<int> &st, int k ){

    if(k == 1){
        st.pop();
        return; 
    }

    int temp = st.top();
    st.pop(); 

    solve(st, k-1); 

    st.push(temp); 
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

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);  

    display(st); 

    cout << endl;

    solve(st, st.size()/ 2 +1);
    
    display(st); 
    return 0; 


}