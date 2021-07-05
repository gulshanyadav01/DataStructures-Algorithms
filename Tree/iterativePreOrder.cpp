/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 05-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

void iterativePreOrder(Node *root){
    stack<Node *> st; 
    st.push(root);
    while(st.empty() == false){
        Node *curr = st.top();
        st.pop(); 
        cout << curr -> data <<" "; 
        if(curr-> right!= NULL) st.push(curr-> right);
        if(curr-> left != NULL) st.push(curr->left);

    }
}

// efficient solution 

void iterative(Node *root){
    stack <Node *> st; 
    Node *curr = root; 
    while(curr!= NULL || st.empty() == false){
        while(curr!= NULL){
            cout << curr-> data <<" ";

            if(curr-> right!= NULL) st.push(curr->right);
            curr = curr-> left;
        }
        if(st.empty() == false){
            curr = st.top();
            st.pop();
        }
    }
}

int main(){
    Node *root = new Node(10);
    root-> left = new Node(20);
    root->right = new Node(30); 
    iterativePreOrder(root);
    cout << endl;
    iterative(root);
    return 0; 
}