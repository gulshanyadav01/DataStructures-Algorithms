/* 
author: gulshan yadav
date: 19-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

Node *sortedInsert(Node *head, int x){
    Node *temp = new Node(x); 
    if(head == NULL) return NULL; 
    if(x< head->data){
        temp->next = head; 
        return temp;
    }
    Node *curr = head; 
    while(curr->next!= NULL && curr->next->data< x){
        curr = curr->next; 
    }
    temp->next = curr->next;
    curr->next = temp; 
    return head; 
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(50);
    print(head);
    head = sortedInsert(head, 45);
    cout << endl;
    print(head); 
    return 0; 
}