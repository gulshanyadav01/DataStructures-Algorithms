/* 
author: gulshan yadav
date: 19-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

// this is naive solution 
// space is Q(N)
Node *reverseLinkedList(Node *head){
    vector<int> arr; 
    for(Node *curr =head; curr!= NULL; curr = curr->next){
        arr.push_back(curr->data);
    }
    for(Node *curr = head; curr!= NULL; curr = curr->next){
        curr->data = arr.back();
        arr.pop_back();
    }
    return head; 
}

// efficient solution 

Node *reverseLinked(Node *head){
    Node *curr =head; 
    Node *prev = NULL; 
    while(curr != NULL){
        Node *next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next;
    }
    return prev; 
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(50);
   
    head = reverseLinked(head);
    print(head);
    return 0; 

}