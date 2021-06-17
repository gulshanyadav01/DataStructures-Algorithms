/* 
author: gulshan yadav
date: 17-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

Node *deleteHead(Node *head){
    if(head == NULL) return NULL; 
    if(head->next == NULL){
        delete head; 
        return NULL; 
    }
    Node *curr = head;
    while(curr->next != head){
      curr =   curr->next; 
    }
    curr->next = head->next; 
    delete head;
    return curr->next; 
}

Node *deleteKthNode(Node *head, int k ){
    if(head == NULL) return NULL; 
    if(k==1){
        return deleteHead(head);
    }
    Node *curr = head; 
    for(int i = 0; i<k-2; i++){
        curr = curr->next; 
    }
    Node *temp = curr->next; 
    curr->next = curr->next->next; 
    delete temp; 
    return head; 
}

void printLinkedList(Node *head){
    if(head == NULL) return;
    Node *p = head; 
    do{
        cout << p-> data <<" "; 
        p  = p->next; 
    }while(p!= head); 
}

int main(){
    Node *head = new Node(10); 
    Node *temp1 = new Node(20); 
    Node *temp2 = new Node(30); 
    head->next = temp1; 
    temp1->next  = temp2; 
    temp2->next = head; 
    head = deleteKthNode(head, 3);
    printLinkedList(head);
    // return 0; 

}