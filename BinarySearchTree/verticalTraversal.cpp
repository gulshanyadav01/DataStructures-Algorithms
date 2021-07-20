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


void verticalTraversal(Node *root){
    
    map<int, vector<int>> mp; 
    queue<pair<Node*, int>> q; 
    q.push({root, 0}); 
    while(q.empty() == false){
        auto p = q.front(); 
        Node *curr = p.first; 
        int hd = p.second; 
        mp[hd].push_back({curr-> data}); 
        q.pop(); 
        if(curr-> left!= NULL){
            q.push({curr-> left , hd-1}); 
        }

        if(curr-> right!= NULL){
            
            q.push({curr-> right, hd+1});
        }
    }
    // traverse the map
    for(auto x: mp){
         
        for(int  i: x.second){
            cout << i<<" ";
        }
        cout << "\n";
    }

}
int main(){
    Node *root = new Node(10);
    root-> left = new Node(20); 
    root-> right = new Node(30);
    root-> right-> left = new Node(40);
    root-> right-> right = new Node(50);
    verticalTraversal(root); 
    return 0; 
}
