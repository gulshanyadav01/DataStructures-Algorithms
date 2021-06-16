/* 
author: gulshan yadav
date: 16-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "DNode.h"
#include "print.h"
using namespace std; 

Node *insertEnd(Node *head, int data){
    Node *temp = new Node(data);
    if(head == NULL){
        return temp;
    }
    Node *curr = head; 
    while(curr->next != NULL){
        curr= curr->next; 
    }
    curr->next = temp;
    temp->prev= curr; 
    return head; 
}

int main(){
    Node *head = NULL; 
    head = insertEnd(head, 10); 
    head = insertEnd(head, 20); 
    print(head); 
    return 0; 
}