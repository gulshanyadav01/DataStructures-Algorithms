/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 16-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include "/home/gulshan/Desktop/geekForGeeks/Tree/Node.h"
using namespace std;

// print the bottom view of tree

void bottomView(Node *root){
    queue<pair<Node *, int>> q; 
    map<int, int> mp; 
    q.push({root, 0}); 
    while(q.empty() == false){
        auto p = q.front(); 
        Node *curr = p.first; 
        int hd = p.second; 
        mp[hd] = curr-> data; 
        q.pop(); 
        if(curr-> left != NULL){
            q.push({curr-> left, hd-1});
        }
        if(curr-> right != NULL){
            q.push({curr-> right, hd+1});
        }

    }
    // print the elements 
    for(auto x: mp){
        cout << x.second<<" ";
    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20); 
    root->right = new Node(30); 
    // root-> left-> left = new Node(40); 
    root-> left-> right = new Node(50);
    root-> left->right-> right = new Node(60); 
    bottomView(root);
    // return 0; 

}