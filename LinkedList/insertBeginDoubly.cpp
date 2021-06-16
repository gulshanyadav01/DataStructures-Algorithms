/* 
author: gulshan yadav
date: 16-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "DNode.h"
#include "print.h"
using namespace std; 

Node *insertBegin(Node *head, int data){
    Node *temp = new Node(data); 
    if(head == NULL){
        return temp; 
    }
    else{
        temp->next = head; 
        head->prev = temp; 
        return temp; 
    }
}
int main(){
    Node *head = new Node(10); 
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    head = insertBegin(head, 5); 
    print(head); 
    return 0; 
}