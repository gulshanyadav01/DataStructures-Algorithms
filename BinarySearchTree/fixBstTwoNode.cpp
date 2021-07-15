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

Node *pre = NULL, *first = NULL, *second = NULL; 

void fixBst(Node *root){
    if(root == NULL) return ; 

    fixBst(root-> left); 
    if(pre != NULL && (root->data < pre->data)){
        if(first == NULL){
            first = pre; 
        }
        second = root; 
    }
    pre = root; 
    fixBst(root-> right); 

}

// print the inorder

void printInorder(Node *root){
    if(root!= NULL){
        printInorder(root-> left);
        cout << root-> data<<" ";
        printInorder(root-> right);
    }
}

int main(){
    Node *root = new Node(20); 
    root-> left = new Node(60); 
    root-> right = new Node(80); 
    root-> left-> left = new Node(4); 
    root-> left->right = new Node(10);
    root-> right-> left =  new Node(8); 
    root-> right -> right = new Node(100); 
    printInorder(root); 
    cout << endl;
    fixBst(root); 
    int temp = first -> data; 
    first-> data = second->data; 
    second-> data = temp; 
    printInorder(root);

}