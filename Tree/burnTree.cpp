/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 05-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

int res = 0; 

int burnTree(Node *root, int leaf, int &dist){
    if(root == NULL) return 0;

    if(root-> data == leaf) {dist = 0; return 1;}

    int ldist = -1, rdist = -1; 
    int lh = burnTree(root-> left, leaf, ldist);
    int rh = burnTree(root-> right, leaf, rdist); 

    if(ldist != -1){
        dist = ldist+1; 
        res = max(res, dist+ rh);
    }
    else if(rdist != -1){
        dist = rdist+1; 
        res = max(res, dist+ lh);
    }
    return max(lh, rh) + 1; 
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
    int dist = -1; 
    burnTree(root, 8, dist);
    cout << res << " ";
    return 0; 
}
