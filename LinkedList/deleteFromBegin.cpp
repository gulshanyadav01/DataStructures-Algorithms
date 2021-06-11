/* 
author: gulshan yadav
date: 11-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include "Node.h"
using namespace std;

Node *deleteFromBegin(Node *head){

    if(head == NULL){
        return NULL; 
    }
    Node *temp = head-> next; 
    delete head; 
    return temp;
}
void print(Node *head){
    while(head!= NULL){
        cout << head-> data<<" "; 
        head = head-> next; 
    }
}

int main(){
    // Node *head = new Node(10); 
    // head-> next = new Node(20); 
    // head-> next-> next = new Node(30); 
    Node *head = NULL; 
    head = deleteFromBegin(head); 
    print(head); 
    return 0; 
}