/* 
author: gulshan yadav
date: 16-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

Node *insertEnd(Node *head, int data){
    Node *temp = new Node(data); 
    if(head == NULL ){
        temp->next = temp; 
        return temp; 
    }
    Node *curr = head; 
    while(curr->next != head){
        curr  = curr->next; 
    }
    temp->next = curr->next; 
    curr->next = temp; 
    return head; 
}

void printLinked(Node *head){
    if(head == NULL){
        return; 
    }
    Node *p = head; 
    do{
        cout << p->data <<" "; 
        p = p->next; 
    }while(p!= head); 
}

int main(){
    Node *head = new Node(10); 
    head->next = head; 
    head = insertEnd(head, 20); 
    head = insertEnd(head, 30);
    printLinked(head);
    return 0; 

}