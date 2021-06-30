/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 30-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;
int maxValue = 0; 
void printLeftView(Node *root, int level){
    if(root == NULL) return;
    if(maxValue< level){
        cout << root->data<<" ";
        maxValue = level;
    }
    printLeftView(root-> left, level + 1);
    printLeftView(root-> right, level + 1);
}

// iterative solution 

void printLeftViewIter(Node *root){
    queue<Node *> q; 
    q.push(root);
    while(q.empty() == false){
        int count = q.size();
        for(int i = 0; i< count; i++){
            Node *curr = q.front();
            q.pop();
            if(i == 0){
                cout << curr -> data<<" ";
            }
            if(curr->left != NULL){
                q.push(curr-> left);
            }
            if(curr-> right != NULL){
                q.push(curr-> right);
            }
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
    printLeftView(root, 1);
    cout << endl;
    printLeftViewIter(root);
    return 0; 
}