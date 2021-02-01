/*
author:"gulshan yadav",
email:"gulshany01@gmail.com",
date:"28-DEC-2020"
*/
#include<iostream>
#include "Node.h"
using namespace std;

Node *insertAtGiven(Node *head, int pos, int data){
    Node *temp = new Node(data); 
    if(pos ==1  ){
        temp->next = head; 
        
        return temp;
    }
    Node *curr = head; 
    int i =1; 
    while(i<= pos-2 && curr!= NULL){
        curr = curr->next; 
        i++;

    }
    if(curr == NULL){
        return head; 
    }
    temp->next = curr->next; 
    curr->next = temp; 
    return head;

}

void printLinkedList(Node *head){
    while(head != NULL){
        cout << head->data<< " ";
        head = head->next;
    }

}

int main(){
    Node *head = new Node(10); 
    head->next = new Node(20); 
    head->next->next = new Node(30);
    head->next->next->next = new Node(40); 
    head = insertAtGiven(head, 3, 15); 
    printLinkedList(head); 
}