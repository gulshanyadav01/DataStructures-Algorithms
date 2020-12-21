/*
author:"gulshan yadav",
email:"gulshany01@gmail.com",
date:"21-DEC-2020"
*/

#include<iostream>
#include "Node.h"
using namespace std;

void printLinkedList(Node *head){
    while(head != NULL){
        cout << head->data; 
        head = head->next; 
    }
}

Node *insertEnd(Node *head, int x ){
    Node *temp = new Node(x);
    if(head == NULL){
        return temp; 
    }
    Node *curr = head; 
    while(curr->next != NULL){
        curr = curr->next; 

    }
    curr->next = temp; 
    return head; 
}



int main(){
    Node *head = NULL; 
    head = insertEnd(head, 10);
    head = insertEnd(head, 10); 
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    printLinkedList(head); 
    return 0; 
}

