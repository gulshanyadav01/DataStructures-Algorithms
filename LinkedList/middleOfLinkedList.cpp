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
// reqiure two traversals 
void middleLinked(Node *head){
    if(head == NULL) return;
    int count = 0; 
    Node *curr;
    for(curr = head; curr!= NULL; curr = curr->next){
        count++;
    }
    curr = head; 
    for(int i = 0; i< count/2; i++){
        curr = curr->next;
    }
    cout << curr->data<<" ";
}

// efficient solution 

void middleLinkedList(Node *head){
    if(head == NULL)return;
    Node *slow = head, *fast = head;
    while(fast!= NULL && fast->next != NULL){
        slow = slow->next; 
        fast = fast->next->next; 
    }
    cout << slow->data<<" ";

}

int main(){
     Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(50);
    middleLinked(head);
    cout << endl;
    middleLinkedList(head);
    return 0; 

}