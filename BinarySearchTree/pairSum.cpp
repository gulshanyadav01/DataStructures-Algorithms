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

// method 1: two pointer 

void  pairSum(Node *root, vector<int> &arr){
    if(root!= NULL){
        pairSum(root-> left, arr);
        arr.push_back(root-> data);
        pairSum(root-> right, arr);
    }
}

bool isPairSum(vector<int> &arr, int sum){
    int low = 0; 
    int high = arr.size()-1; 
    while(low<= high){
        if(arr[low]+arr[high] == sum){
            return true; 
        }
        else if (arr[low]+ arr[high]< sum){
            low++;
        }
        else if(arr[low]+ arr[high]> sum){
            high--;
        }
        
    }
    return false;
}

int main(){
    Node *root = new Node(10); 
    root-> left = new Node(8); 
    root-> right = new Node(20); 
    root-> left-> left = new Node(4); 
    root-> left->right = new Node(9);
    root-> right-> left =  new Node(11); 
    root-> right -> right = new Node(30);
    root-> right -> right-> left = new Node(25);
    vector<int> arr;
    pairSum(root, arr); 
    cout << isPairSum(arr, 33); 
    return 0; 
    
}