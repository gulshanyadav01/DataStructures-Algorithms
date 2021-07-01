/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 01-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

int maxWidth(Node *root){
    queue< Node * > q; 
    q.push(root);
    int res = 0; 
    while(q.empty() == false){
        int count = q.size();
        res = max(res, count );
        for(int i = 0; i< count; i++){
            Node *curr = q.front();
            q.pop();
            if(curr -> left != NULL) q.push(curr-> left);
            if(curr -> right != NULL) q.push(curr->right);

        }
    }
    return res; 
}

int main(){
    Node *root  = new Node(10);
    root->left = new Node(80);
    root-> left-> right = new Node(70);
    cout << maxWidth(root);
    return 0; 
}