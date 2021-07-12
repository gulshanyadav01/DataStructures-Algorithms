/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 12-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "/home/gulshan/Desktop/geekForGeeks/Tree/Node.h"
using namespace std;

Node *getSucc(Node *root){
    Node *curr = root-> right; 
    while(curr!= NULL && curr->left!= NULL){
        curr = curr->left; 
    }
    return curr; 
}

Node *deletion(Node *root, int x){
    if(root == NULL) return root;
    
    if(root-> data > x){
        root->left = deletion(root-> left, x);
    }
    else if (root-> data < x){
        root->right = deletion(root-> right, x);
    }
    else{
        if(root-> left == NULL){
            Node *temp = root-> right; 
            delete root; 
            return temp; 
        }
        else if(root-> right == NULL){
            Node *temp = root-> left; 
            delete root; 
            return temp; 
        }
        else{
            Node *succ = getSucc(root);
            root-> data = succ->data; 
            root-> right = deletion(root-> right, succ->data); 
        }
    }
    return root; 
}

void printTree(Node *root){
    if(root!= NULL){
        printTree(root-> left);
        cout << root-> data <<" ";
        printTree(root-> right);
    }
}

int main(){
    Node *root = new Node(15); 
    root-> left = new Node(5); 
    root-> right = new Node(20);
    root-> left-> left = new Node(3); 
    root-> right -> right = new Node(80);
    root-> right -> left = new Node(18);
    root-> right -> left -> left = new Node(16);
    printTree(root); 
    cout << endl;
    root = deletion(root, 20);
    printTree(root);
    // return 0; 
}