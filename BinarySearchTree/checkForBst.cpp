/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 15-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include "/home/gulshan/Desktop/geekForGeeks/Tree/Node.h"
using namespace std;


int maximum(Node *root){
    if(root == NULL){return INT_MIN;}

    int lh = maximum(root -> left); 
    int rh = maximum(root -> right); 
    return max(root->data, max(lh, rh)); 
}

int minimum(Node *root){
    if(root == NULL){return INT_MAX; }

    int lh = minimum(root-> left);
    int rh = minimum(root-> right); 
    return min(root-> data, min(lh, rh));
}

bool checkForBst(Node *root){
    if(root == NULL) return true; 

    int lhmax = maximum(root-> left); 
    int rhmin = minimum(root-> right); 

    return (lhmax< root-> data && rhmin > root-> data && checkForBst(root-> left) && checkForBst(root-> right)); 
}

int main(){
    Node *root = new Node(10); 
    root-> left = new Node(8); 
    root-> right = new Node(20); 
    root-> right-> left = new Node(53); 
    root-> right -> right = new Node(24); 
    cout << checkForBst(root); 
    return 0; 
}