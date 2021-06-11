/* 
author: gulshan yadav
date: 11-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include "Node.h"
#include "print.h"
using namespace std;

Node *insertAtGivenPos(Node *head, int pos, int data){
    Node *temp = new Node(data);
    if(pos == 1){
        temp->next = head;
        return temp;
    }
    Node *curr = head; 
    for(int i = 1; i<= pos-2 && curr!= NULL; i++){
        curr = curr->next; 
    }
    if(curr == NULL) return head; 
    temp->next = curr->next; 
    curr->next = temp; 
    return head;
    

}

int main(){
    Node *head = new Node(10); 
    head->next = new Node(20); 
    head->next->next  = new Node(30); 
    int pos; 
    cin >> pos; 
    int data; 
    cin >> data; 
    print(head);
    cout << endl;
    head = insertAtGivenPos(head, pos, data); 
    print(head); 
    return 0; 
}