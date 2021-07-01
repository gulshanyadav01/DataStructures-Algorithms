/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 01-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;


void printSpiral(Node *root){
    queue<Node *> q; 
    stack<int> st; 
    bool reverse = false; 
    q.push(root);
    while(q.empty() == false){
        int count = q.size();
        for(int i = 0; i< count; i++){
            Node *curr = q.front();
            q.pop();
            if(reverse){
                st.push(curr->data);

            }else{
                cout << curr-> data <<" ";
            }
            if(curr-> left != NULL) q.push(curr-> left);
            if(curr-> right != NULL) q.push(curr->right);

        }
        if(reverse){
            while(st.empty() == false){
                cout << st.top()<<" ";
                st.pop();
            }
        }
        reverse = !reverse; 

    }
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2); 
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);
    root->left->left-> right = new Node(9);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->left = new Node(10);
    printSpiral(root);
    return 0; 
}