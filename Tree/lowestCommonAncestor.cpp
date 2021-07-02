/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 02-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;


// first to find the path 

bool findPath(vector< Node *> &p, int n, Node *root){
    if(root == NULL) return  false; 
    p.push_back(root);
    
    if(root-> data == n) return true; 

    if(findPath(p, n, root-> left) || findPath(p, n, root-> right)){
        return true; 
    }
    p.pop_back();

    return false; 
}

Node *lowestCommonAncestor(Node *root, int n1, int n2){
    vector<Node *> p1; 
    vector<Node *> p2;

    if((findPath(p1, n1, root) == false) || (findPath(p2, n2, root) == false) ) return NULL; 

    for(int i = 0; i< p1.size()-1 && p2.size() -1; i++){
        if(p1[i+1] != p2[i+1]) return p1[i];
    }
    return NULL; 


}

// efficient solution 

Node *lca(Node *root, int n1, int n2){
    if(root == NULL) return NULL; 
    
    if(root -> data == n1 || root-> data == n2) return root; 

    Node *lca1 = lca(root-> left, n1, n2);
    Node *lca2 = lca(root-> right, n1, n2);

    if(lca1 != NULL && lca2 != NULL) return root; 

    if (lca1 != NULL) return lca1; 
    else{
        return lca2; 
    }
}

int main(){
    Node *root = new Node(10);
    root-> left = new Node(20);
    root-> right = new Node(30);
    root-> right-> left = new Node(40);
    root-> right -> right = new Node(50);
    // Node *lca = lowestCommonAncestor(root, 10, 50);
    if(lca == NULL) return -1; 
    // cout << lca -> data <<" "; 
    cout << endl;
    Node *lca2 = lca(root, 10, 50);
    cout << lca2 -> data <<" ";
    return 0; 
}
