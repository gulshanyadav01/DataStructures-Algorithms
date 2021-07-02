/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 02-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;


int height(Node *root){
    if(root == NULL) return 0;
    return max(height(root-> left), height(root-> right)) + 1; 
}

int diameter(Node *root){;
    if(root == NULL) return 0; 
    int d1 = 1 + height(root-> left) + height(root-> right);
    
    int d2 = diameter(root-> left);
    int d3 = diameter(root-> right);
    return max(d1, max(d2, d3));
}

// efficient solution 
int res = 0; 
int heightDiamter(Node *root){
    if(root == NULL) return 0; 
    int lh = heightDiamter(root-> left);
    int rh = heightDiamter(root-> right);

    res = max(res, lh + rh + 1);
    return max(lh, rh) + 1; 
}

int main(){
    Node *root = new Node(10);
    root-> left = new Node(20);
    root-> right = new Node(30);
    root-> right-> left = new Node(40);
    root-> right-> right = new Node(60); 
    root-> right-> left-> right  = new Node(50);
    root-> right-> right-> right = new Node(70);
    cout << diameter(root); 
    cout << endl;
    heightDiamter(root); 
    cout << res<<" ";
    return 0; 
}