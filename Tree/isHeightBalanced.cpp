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

// efficient solution 
int isBalance(Node *root){
    if(root == NULL) return 0; 
    int lh = isBalance(root-> left);
    if(lh == -1) return -1; 
    int rh = isBalance(root-> right);
    if(rh == -1) return -1; 
    if(abs(lh - rh) > 1) return -1; 
    else{
        return max(lh, rh) + 1; 
    }
}

int main(){
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    cout << heightBalanced(root);
    cout << endl;
    if(isBalance(root) == -1){
        cout << "No";
    }
    else{
        cout << "yes";
    }
    return 0; 
}
