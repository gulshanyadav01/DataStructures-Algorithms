/* 
author: gulshan yadav
date: 16-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "DNode.h"
#include "print.h"
using namespace std; 

Node *reverseDoubly(Node *head){
    if(head == NULL || head->next == NULL) return head; 
    Node *curr =head; 
    Node *prev = NULL; 
    while(curr!= NULL){
        prev = curr->prev; 
        curr->prev = curr->next; 
        curr->next = prev; 
        curr = curr->prev; 
    }
    return prev->prev; 
}

int main(){
    Node *head = new Node(1); 
    Node *temp1 = new Node(2); 
    Node *temp2 = new Node(3); 
    head->next = temp1; 
    temp1->prev = head; 
    temp2->prev = temp1; 
    print(head); 
    cout << endl;
    head = reverseDoubly(head); 
    print(head); 
    return 0; 
}