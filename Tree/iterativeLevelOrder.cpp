/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 05-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>

#include "Node.h"
using namespace std;

void iterativeLevelOrder(Node *root){
    stack<Node *> st; 
    Node *curr = root; 
    while(curr!= NULL || st.empty() == false){
        while(curr!= NULL){
            st.push(curr);
            curr = curr-> left;
        }
        curr = st.top();
        st.pop();
        cout << curr -> data<<" ";
        curr = curr-> right;
    }
}

int main(){
    Node *root = new Node(10);
    root-> left = new Node(20);
    root->right = new Node(30); 
    iterativeLevelOrder(root);
    return 0; 
}