/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 13-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "/home/gulshan/Desktop/geekForGeeks/Tree/Node.h"
using namespace std;


// efficient solution 

Node *floor(Node *root, int x){
    Node *res = NULL; 
    while(root!= NULL){
        if(root -> data == x) return root; 
        else if (root-> data > x) root= root-> left; 
        else if(root-> data < x){
            res = root; 
            root= root-> right; 
        }
    }
    return res; 
}

int main(){
    Node *root = new Node(15); 
    root-> left = new Node(5); 
    root-> right = new Node(20);
    root-> left-> left = new Node(3); 
    root-> right -> right = new Node(80);
    root-> right -> left = new Node(18);
    root-> right -> left -> left = new Node(16);
    Node *k = floor(root, 21);
    cout << k-> data;
    return 0; 
}