/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 14-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include "/home/gulshan/Desktop/geekForGeeks/Tree/Node.h"
using namespace std;


void printKthSmallest(Node *root, int k){
    int count = 0; 
    if(root!= NULL){
        printKthSmallest(root-> left, k);
        count++; 
        if(count == k){
            cout << root-> data<<" ";
        }
        printKthSmallest(root-> right, k);
    }

}

int main(){
    int k; 
    cin >> k; 
    Node *root; 
    printKthSmallest(root,k); 
}