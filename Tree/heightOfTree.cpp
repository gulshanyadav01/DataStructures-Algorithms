/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 29-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node{
    public: 
    int data; 
    Node *left; 
    Node *right;
    Node(int k){
        data = k; 
        left = NULL; 
        right = NULL; 
    }

}; 

int heightOfTree(Node *root){
    if(root == NULL) return 0;
    else {
        return max(heightOfTree(root-> left), heightOfTree(root->right) ) + 1; 
    }
}

int main(){
    Node *root = new Node(10); 
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root-> right-> right = new Node(50); 
   cout <<  heightOfTree(root);
    return 0;  
}