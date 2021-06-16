/* 
author: gulshan yadav
date: 16-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "DNode.h"
#include "print.h"
using namespace std; 

Node *deleteEnd(Node *head){
    if(head == NULL) return NULL; 
    if(head -> next == NULL ){
        delete head; 
        return NULL; 
    }
    Node *curr =head; 
    while(curr->next!= NULL){
        curr = curr->next; 
    }
    curr->prev->next = NULL;
    delete curr; 
    return head; 
}

int main(){
    Node *head = new Node(1); 
    Node *temp1 = new Node(2); 
    Node *temp2 = new Node(3); 
    head->next = temp1; 
    temp1->prev = head; 
    temp1->next = temp2;
    temp2->prev = temp1; 
    print(head); 
    cout << endl;
    head = deleteEnd(head); 
    print(head); 
    return 0; 
}