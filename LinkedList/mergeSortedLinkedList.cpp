/* 
author: gulshan yadav
date: 22-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std;

Node *merge(Node *a, Node *b){
    if(a == NULL) return b; 
    if(b == NULL) return a; 
    Node *head = NULL; 
    Node *tail = NULL;
    if(a->data <= b->data){
        head= tail = a; 
        a= a->next; 
    }else{
        head= tail = b; 
        b= b->next; 
    }
    while(a!= NULL && b!= NULL){
        if(a->data<= b->data){
            tail->next = a; 
            tail = a; 
            a= a->next; 
        }
        else{
            tail ->next = b; 
            tail = b; 
            b= b->next;
        }
    }
    if(a== NULL) tail->next = b; 
    else tail ->next = a; 
    return head; 
}

int main(){
    Node *a = new Node(10); 
    a->next = new Node(20); 
    Node *b = new Node(5); 
    b->next = new Node(15); 
    Node *head =  merge(a, b); 
    print(head); 
    return 0; 
}
