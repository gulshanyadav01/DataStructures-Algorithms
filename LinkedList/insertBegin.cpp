/* 
author: gulshan yadav
date: 10-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include "Node.h"
using namespace std;

Node *insertBegin(Node *head, int x ){
    Node *temp = new Node(x); 
    temp -> next = head; 
    return temp; 

}

void printList(Node *head){
    while(head!= NULL){
        cout << head -> data<<" "; 
        head = head-> next; 

    }

}

int main(){
    Node *head = NULL; 
    head = insertBegin(head, 30); 
    head = insertBegin(head, 20); 
    head = insertBegin(head, 10); 
    printList(head); 
    return 0; 
    return 0; 
    
}