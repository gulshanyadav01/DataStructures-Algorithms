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
        cout << head->data<< "\n"; 
        head = head->next; 
    }
}

void insertBegin(Node *head){
    Node *temp = new Node (5); 
    if(head == NULL){
        head = temp; 
    }
    else
    {
        temp->next =head; 
        head = temp; 
    }
    printLinkedList(head); 
    
}

int main(){
    // Node *head = new Node(10);
    // Node *temp1 = new Node(20); 
    // Node *temp2 = new Node(30); 
    // head->next = temp1; 
    // temp1->next = temp2; 
    Node *head; 
    insertBegin(head); 
    return 0; 


}