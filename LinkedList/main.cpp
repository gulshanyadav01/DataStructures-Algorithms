#include<iostream>
#include "Node.h"
using namespace std; 

void printNode(Node *head){
    while(head!= NULL){
        cout << head-> data << " "; 
        head = head-> next; 
    }
    
}

// recursively print the linked list 

void print(Node *head){
    if(head == NULL){
        return; 
    }
    cout << head -> data<<" "; 
    print(head-> next); 
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20); 
    Node *temp2 = new Node(30); 
    head-> next = temp1; 
    temp1-> next  = temp2; 
    // printNode(head); 
    // cout << endl;
    // printNode(head);
    print(head);  
    return 0; 
}