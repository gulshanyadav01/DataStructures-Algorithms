/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 30-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

int maxOfTree(Node *root){
    if(root == NULL){
        return INT_MIN; 
    }
    else{
        return max(root-> data, max(maxOfTree(root->left), maxOfTree(root -> right)));
    }

}

// iterative solution 

int maxOfTreeIter(Node *root){
    queue< Node * > q; 
    q.push(root);
    int mx = INT_MIN; 
    while(q.empty() == false){
        Node *curr = q.front();
        q.pop();
        mx = max(mx, curr-> data);
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    return mx; 
}

int main(){
    Node *root = new Node(10); 
    root->left = new Node(20);
    root->right = new Node(30);
    root-> left-> left = new Node(40); 
    root->left -> right = new Node(50);
    root->right->right = new Node(70);
    root-> right-> right->right = new Node(80);
    cout << maxOfTree(root);
    cout << endl;
    cout << maxOfTreeIter(root);
    return 0; 
}