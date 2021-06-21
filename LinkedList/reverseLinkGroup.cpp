/* 
author: gulshan yadav
date: 20-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

// this is recursive solution 
Node *reverseLinkGroup(Node *head, int k ){
    Node *curr =head; 
    Node *next = NULL; 
    Node *prev = NULL; 
    int count = 0; 
    while(curr!= NULL && count< k){
        next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next; 
        count++;
    }
    if(next != NULL){
        Node *restHead = reverseLinkGroup(next, k);
        head->next = restHead; 
    }
    return prev; 
}

// iterative solution 

Node *reverseGroup(Node *head, int k ){
    Node *curr = head, *prevFirst = NULL; 
    bool isFirstPass = true; 
    while(curr != NULL){
        Node *first = curr; 
        Node *prev = NULL; 
        int count = 0; 
        while(curr!= NULL &&count< k){
            Node *next = curr->next; 
            curr->next = prev; 
            prev = curr;
            curr = next; 
            count++;
        }
        if(isFirstPass){
            head = prev; 
            isFirstPass = false; 
        }
        else{
            prevFirst->next = prev; 
        }
        prevFirst = first; 
    }
    return head; 
}

int main(){
     Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50); 
    // head->next->next->next->next->next = new Node(60);
    int k; 
    cin >> k;  
    print(head);
    cout << endl;
    head = reverseGroup(head, k);
    print(head);
    return 0; 

}