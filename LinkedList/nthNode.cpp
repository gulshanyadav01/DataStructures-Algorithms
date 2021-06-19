/* 
author: gulshan yadav
date: 19-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

// naive solutioni 
// required to find out the length of linked list
void nthNode(Node *head, int n){
    if(head == NULL)return;
    int len = 0; 
    for(Node *curr = head; curr!= NULL; curr = curr->next){
        len++; 
        
    }
    Node *curr = head; 
    if(len<n)return;
    for(int i = 1; i< len-n+1; i++){
        curr = curr->next;
    }
    cout << curr->data<<" "; 

}

// method 2nd 
// move first pointer to nth pos
// start second from head;

void nthNode2(Node *head, int n ){
    if(head == NULL)return;
    Node *first = head; 
    for(int i = 0; i< n; i++){
        if(first == NULL)return;
        first = first->next; 
    }
    Node *second = head; 
    while(first!= NULL){
        first = first->next; 
        second = second->next;

    }
    cout << second->data<<" ";
}

int main(){
     Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(50);
    int n; 
    cin >> n; 
    // print(head);
    nthNode(head, n);
    cout << endl;
    nthNode2(head, n); 
    return 0; 
}