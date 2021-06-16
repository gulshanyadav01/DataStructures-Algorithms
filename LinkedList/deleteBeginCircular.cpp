/* 
author: gulshan yadav
date: 16-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

Node *deleteBeginCircular(Node *head){
    if(head == NULL) return NULL; 
    if(head->next == head){
        delete head; 
        return NULL; 
    } 
    Node *curr = head; 
    while(curr->next != head){
        curr= curr->next; 
    }
    curr->next = head->next; 
    delete head; 
    return curr->next; 
}

void printLinked(Node *head){
    if(head == NULL) return; 
    Node *p = head; 
    do{
        cout << p->data<<" ";
        p = p->next;
    }
    while(p!= head);
}

int main(){
    Node *head = new Node(10); 
    Node *temp1 = new Node(20); 
    Node *temp2 = new Node(30); 
    head->next = temp1; 
    temp1->next = temp2; 
    temp2->next = head; 
    printLinked(head); 
    cout << endl;
    head = deleteBeginCircular(head);
    printLinked(head);
    return 0; 
}