/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 05-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;


// this is the naive solution 


int countNode(Node *root){
    int lh = 0; 
    int rh = 0; 
    Node *curr = root; 
    while(curr != NULL) {
        lh++; 
        curr = curr -> left; 
    }
    curr = root; 
    while(curr!= NULL){
        rh++; 
        curr = curr-> right; 
    }
    if(lh == rh) return pow(2, lh) - 1; 
    return 1+ countNode(root -> left) + countNode(root-> right); 
}

int main(){
    Node *root = new Node(10); 
    root-> left = new Node(20); 
    root-> right = new Node(30);
    root-> left -> left = new Node(40);
    root-> left -> right = new Node(50);
    cout << countNode(root);
    return 0;  
}