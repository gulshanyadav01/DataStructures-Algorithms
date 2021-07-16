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


void topView(Node *root){
    queue<pair<Node *, int>> q; 
    map<int, int> mp; 
    q.push({root, 0}); 
    while(q.empty() == false){
        auto p = q.front(); 
        Node *curr = p.first; 
        int hd = p.second; 
        if(mp.find(hd) == mp.end()){
            mp[hd] = curr-> data; 
        }
        q.pop(); 
        if(curr-> left != NULL){
            q.push({curr->left, hd-1});
        }
        if(curr -> right != NULL){
            q.push({curr-> right, hd+1}); 
        }
    }
    // print the map

    for(auto x: mp){
        cout << x.second<<" ";
    }
}


int main(){
    // Node *root = new Node(10); 
    // root-> left = new Node(20); 
    // root-> right = new Node(50);
    // root-> left-> left = new Node(30); 
    // root-> left-> right = new Node(40); 
    // root-> right-> left = new Node(60); 
    Node *root= new Node(1); 
    root-> left = new Node(2); 
    root-> right = new Node(3); 
    root-> left-> right = new Node(4); 
    root-> left-> right-> right = new Node(5);
    topView(root); 
    return 0; 
}