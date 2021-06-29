/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 29-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node{
    public: 
    int data; 
    Node *left; 
    Node *right;
    Node(int k){
        data = k; 
        left = NULL; 
        right = NULL; 
    }

}; 

void inorder(Node *root){
    if(root != NULL){
        inorder(root -> left); 
        cout << root -> data << " "; 
        inorder(root -> right); 
    }
}

int main(){
    Node *root = new Node(10); 
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root-> right-> right = new Node(50); 
    inorder(root);
    return 0;  
}

