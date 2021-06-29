/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 29-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

void printKDistance( Node *root, int k ){
    if(root == NULL) return; 
    if(k == 0) cout << root -> data << " "; 
    else{
        printKDistance(root -> left, k-1);
        printKDistance(root -> right, k-1);
    }
}

int main(){
    Node *root = new Node(10); 
    root->left = new Node(20);
    root->right = new Node(30);
    root-> left-> left = new Node(40); 
    root->left -> right = new Node(50);
    root->right->right = new Node(70);
    root-> right-> right->right = new Node(80); 
    printKDistance(root, 2);
    return 0; 
}

