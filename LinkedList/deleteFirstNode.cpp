/*
author:"gulshan yadav",
email:"gulshany01@gmail.com",
date:"21-DEC-2020"
*/

#include<iostream>
#include "Node.h"
using namespace std;

Node *deleteNode(Node *head){
    if(head == NULL){
        return head; 
    }
    else{
        Node *temp = head -> next; 
        delete head; 
        return temp; 
    }
}

void printLinkedList(Node *head){
    while(head!= NULL){
        cout << head -> data <<" "; 
        head = head->next; 
    }
}


int main(){
    Node *head = new Node(10); 
    head->next = new Node(20); 
    head = deleteNode(head); 
    printLinkedList(head); 
}