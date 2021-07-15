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

void verticalSumRec(Node *root, int hd, map<int, int> &mp){
    if(root == NULL) return;
    verticalSumRec(root-> left, hd-1, mp);
    mp[hd] += root-> data; 
    verticalSumRec(root-> right, hd+1, mp); 
}

void verticalSum(Node *root){
    map<int, int> mp; 
    verticalSumRec(root, 0, mp); 
    for(auto sum: mp){
        cout << sum.second<<" "; 
    }
}

int main(){
    Node *root = new Node(10); 
    root-> left = new Node(20); 
    root-> right = new Node(30); 
    root-> left-> left= new Node(5); 
    root-> left-> right = new Node(50);
    verticalSum(root); 
    return 0; 
}