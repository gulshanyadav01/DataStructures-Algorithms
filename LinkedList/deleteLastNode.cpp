/*
author:"gulshan yadav",
email:"gulshany01@gmail.com",
date:"21-DEC-2020"
*/

#include<iostream>
#include "Node.h"

using namespace std; 

Node *deleteLastNode(Node *head){
    if(head == NULL) return NULL; 
    if(head -> next == NULL){
    delete head;
     return NULL;
    }
    Node *curr = head;
    while(curr-> next-> next != NULL){
        curr = curr->next; 

    }
    delete curr->next; 
    curr->next = NULL;
    return head; 
}

void printLinkedList(Node *head){
    while(head != NULL){
        cout << head -> data<< " ";
        head = head->next;

    }
}


int main(){
    Node *head = new Node(10); 
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    head->next->next->next = new Node(40); 
    head->next->next->next->next = new Node(50);
    head = deleteLastNode(head); 
    printLinkedList(head); 
    return 0;
}