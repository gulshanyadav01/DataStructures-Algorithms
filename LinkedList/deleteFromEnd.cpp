/* 
author: gulshan yadav
date: 11-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include "Node.h"
#include "print.h"
using namespace std;

Node *deleteFromEnd(Node *head){
    if(head == NULL)return NULL; 
    if(head->next == NULL) return NULL; 
    Node *curr = head; 
    while(curr-> next -> next != NULL){
        curr = curr->next; 

    }
    delete curr->next; 
    curr->next = NULL; 
    return head; 
} 

int main(){
    Node *head = new Node(10); 
    head -> next = new Node(20); 
    // head -> next -> next = new Node(30); 
    // head -> next -> next -> next = new Node(40); 
    print(head); 
   head =  deleteFromEnd(head); 
   cout << endl;
   print(head); 
   return 0; 
}