/* 
author: gulshan yadav
date: 10-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include "Node.h"
using namespace std;

Node *insertAtEnd(Node *head, int x){
    Node *temp = new Node(x); 
    if(head == NULL){
        return temp;  
    }
    Node *curr = head; 
    while(curr-> next != NULL){
        curr = curr-> next; 
    }
    curr-> next = temp; 
    return head; 
}

void print(Node *head){
    while(head!= NULL){
        cout << head-> data<<" "; 
        head = head-> next; 
    }

}

int main(){
    Node *head =NULL;
    head = insertAtEnd(head, 10); 
    head = insertAtEnd(head, 20); 
    head = insertAtEnd(head, 30);
    print(head); 
    return 0; 


}