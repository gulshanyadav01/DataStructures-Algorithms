/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 29-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;


void printLevelOrder(Node *root){
    queue < Node * > q; 
    q.push(root);
    
    while(q.empty() == false){
        Node *curr = q.front();
        q.pop();
        cout << curr -> data << " ";
        if(curr->left != NULL){
            q.push(curr-> left);
        }
        if(curr -> right != NULL){
            q.push(curr-> right);
        }
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
    printLevelOrder(root);
    return 0; 
}