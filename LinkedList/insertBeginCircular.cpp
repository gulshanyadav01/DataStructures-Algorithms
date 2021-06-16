/* 
author: gulshan yadav
date: 16-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 


Node *insertBeginCircular(Node *head, int data){
    Node *temp  = new Node(data); 
    if(head == NULL){
        temp->next = temp; 
        return temp;
    }
    Node *curr = head; 
    while(curr->next != head){
       curr =  curr->next;
    }
    curr->next = temp; 
    temp->next = head; 
    return temp; 
}

void printLinkedList(Node *head){
    if(head == NULL){
        return; 
    }
    Node *p = head; 
    do{
        cout << p-> data <<" "; 
        p = p->next; 
    }while(p!= head); 
}

int main(){
    Node *head = new Node(1);
    head->next = head; 
    head = insertBeginCircular(head, 2); 
    head = insertBeginCircular(head, 3); 
    head = insertBeginCircular(head, 4); 
    head = insertBeginCircular(head, 5); 
    printLinkedList(head); 
    return 0; 
}