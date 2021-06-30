/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 30-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

bool isChildSum(Node *root){
    if(root == NULL) return true; 
    if(root-> left == NULL && root-> right == NULL) return true; 

    int sum = 0; 
    if(root-> left != NULL){
        sum += root->left -> data; 
    }
    if(root-> right != NULL){
        sum += root->right -> data; 
    }
    return (root-> data == sum &&
            isChildSum(root-> left) &&
            isChildSum(root-> right)
    ); 
}

int main(){
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    cout << isChildSum(root); 
    return 0; 
}