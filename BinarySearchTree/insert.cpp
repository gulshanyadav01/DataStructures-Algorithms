/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 06-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "/home/gulshan/Desktop/geekForGeeks/Tree/Node.h"
using namespace std;


// this is recursive solution 

Node *insert(Node *root, int x){
    if(root == NULL) {
        return new Node(x);
    }
    else if (root-> data > x){
        root-> left = insert(root-> left, x);
    }
    else if (root-> data < x){
        root-> right = insert(root-> right, x);
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

// iterative solutions 

Node *insertion(Node *root, int x){
    Node *temp = new Node(x);
    Node *parent = NULL; 
    Node *curr = root; 
    while(curr!= NULL){
        parent = curr; 
        if(curr-> data > x){
            curr = curr-> left; 
        }
        else if(curr-> data < x){
            curr= curr-> right;
        }
        else{
            return root; 
        }
    }
    if(parent == NULL){
        return temp; 
    }
    else if (parent-> data < x){
        parent->right = temp; 
    }
    else if(parent-> data > x){
        parent-> left = temp; 
    }
    return root; 
    
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
    cout<<endl;
    root = insert(root, 70); 
    printTree(root); 
    cout << endl;
    Node *hey = insertion(root,50); 
    printTree(hey);
    return 0; 
}