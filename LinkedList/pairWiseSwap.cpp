/* 
author: gulshan yadav
date: 21-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std;

void pairWiseSwap(Node *head){
    Node *curr = head;
    while(curr!= NULL && curr->next!= NULL){
        int x = curr->data; 
        curr->data = curr->next->data; 
        curr->next->data = x;
        curr = curr->next->next;  
    }

}

// method 2

Node *pairWiseSwap2(Node *head){
    if(head == NULL && head->next == NULL) return head;
    Node *prev = head; 
    Node *curr = head->next->next; 
    head->next->next = prev; 
    head = head->next; 
    while(curr!= NULL && curr->next!= NULL){
        prev->next = curr->next; 
        prev = curr; 
        Node *temp = curr->next->next; 
        curr->next->next = curr; 
        curr= temp; 
    }
    prev->next = curr; 
    return head; 
}

int main(){
    Node *head = new Node(5); 
    Node *temp1 = new Node(8);
    Node *temp2 = new Node(7); 
    Node *temp3 = new Node(10); 
    Node *temp4 = new Node(12); 
    Node *temp5 = new Node(15); 
    head->next = temp1;
    temp1->next = temp2; 
    temp2->next = temp3; 
    temp3->next = temp4; 
    temp4->next = temp5; 
    print(head);
    cout << endl;
    head = pairWiseSwap2(head);
    print(head);
    return 0; 
}