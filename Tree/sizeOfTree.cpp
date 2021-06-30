/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 30-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

int getSize(Node *root){
    if(root == NULL) return  0; 
    else {
        return 1+ getSize(root->left) + getSize( root -> right);
    }
}

// iterative solution 

int getSizeIter(Node *root){
    
    if(root == NULL ) return 0; 
    queue<Node *> q; 
    q.push(root);
    int count = 1;
    while(q.empty() == false){
        Node *curr = q.front();
        q.pop();
        if(curr->left != NULL){
            q.push(curr->left);
            count++;
        }
        if(curr -> right != NULL){
            q.push(curr->right);
            count++;
        }
    }
    return count; 
}

int main(){
    Node *root = new Node(10); 
    root->left = new Node(20);
    root->right = new Node(30);
    root-> left-> left = new Node(40); 
    root->left -> right = new Node(50);
    root->right->right = new Node(70);
    root-> right-> right->right = new Node(80);
    cout << getSize(root);
    cout << endl;
    cout << getSizeIter(root);
    return 0; 
}