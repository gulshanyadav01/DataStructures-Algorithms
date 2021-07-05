/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 05-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

// serialize(tree to array)
void serailize(Node *root, vector<int> &arr){
    if(root == NULL){
        arr.push_back(-1);
        return; 
    }
    arr.push_back(root-> data);
    serailize(root-> left, arr);
    serailize(root-> right, arr);
}

// deserialize (array to tree)

Node *deserialize(vector<int> &arr, int &index){
    if(index == arr.size()) return NULL; 

    int val = arr[index];
    index++; 

    if(val == -1) return NULL; 

    Node *root = new Node(val); 
    root-> left = deserialize(arr, index); 
    root-> right = deserialize(arr, index); 
    return root; 
}

void print(Node *root){
    if(root!= NULL){
        print(root-> left); 
        cout << root-> data <<" ";
        print(root-> right);
    }
}

int main(){
    Node *root = new Node(10);
    root-> left = new Node(20);
    root->right = new Node(30); 
    vector<int> arr; 
    serailize(root, arr);
    for(int x: arr){
        cout << x <<" ";

    }
    cout << endl;
    int index = 0; 
   
    Node *con = deserialize(arr,index);
    print(con); 

    return 0; 
}

