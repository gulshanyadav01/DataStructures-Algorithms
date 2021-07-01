/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 01-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "Node.h"
using namespace std;



Node * binaryToDoublyLinkedList(Node *root){
    // do the inorder traversal 
     static Node* prev = NULL;
    if(root == NULL) return root; 
    Node *head = binaryToDoublyLinkedList(root-> left);
    if(prev == NULL) head = root; 
    else{
        root-> left = prev; 
        prev-> right = root; 
    }
    prev = root; 
    binaryToDoublyLinkedList(root-> right);
    return head; 

}

void printLinkedList(Node *head){
    Node *curr = head; 
    while(curr!= NULL){
        cout << curr -> data <<" ";
        curr = curr -> right; 
    }
}


int main(){
    Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(20);
	root->right->left=new Node(30);
	root->right->right=new Node(35);
    Node *head = binaryToDoublyLinkedList(root);
    printLinkedList(head);
    return 0; 
}

