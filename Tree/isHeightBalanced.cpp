/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 30-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

int height(Node *root){
    if(root == NULL){return 0;}
    else{
        return max(height(root-> left), height(root-> right)) + 1; 
    }
}

bool heightBalanced(Node *root){
    if(root == NULL) return true; 
    int lh = height(root -> left);
    int rh = height(root -> right);
    
    return (abs(lh - rh)<= 1 &&
    heightBalanced(root-> left) && 
    heightBalanced(root-> right)
    ); 
}

int main(){
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    cout << heightBalanced(root);
    return 0; 
}
