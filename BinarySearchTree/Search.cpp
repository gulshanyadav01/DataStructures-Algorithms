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

bool search(Node *root, int x){
    if(root == NULL) return false; 
    
    if(root-> data == x) return true; 

    else if (root-> data < x) 
        return search(root->  right, x); 
    
    else if (root-> data > x)
        return search(root->  left, x);
    
}

// this is iterative solution 

bool search2(Node *root, int x){
    while(root!= NULL){
        if(root-> data == x ) return true; 

        else if(root-> data > x){
            root= root-> left; 
        }
        else if (root-> data < x){
            root = root-> right;
        }
    }
    return false; 

}

int main(){
    Node *root = new Node(15); 
    root-> left = new Node(5); 
    root-> right = new Node(20);
    root-> left-> left = new Node(3); 
    root-> right -> right = new Node(80);
    root-> right -> left = new Node(18);
    root-> right -> left -> left = new Node(16);
    cout << search(root, 16); 
    cout << endl;
    cout << search2(root, 16); 
    return 0; 
    
}