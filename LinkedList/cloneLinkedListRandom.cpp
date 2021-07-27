/* 
author: gulshan yadav
date: 21-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
// #include "Node.h"
#include<unordered_set>
#include<unordered_map>
using namespace std; 


class Node{
    public: 
        int data; 
        Node *next; 
        Node *random; 
    Node(int x){
        data = x; 
        next = NULL; 
        random = NULL; 
    }
};


Node *cloneLinkedList(Node *head){

    unordered_map<Node *, Node *> hmap; 
    for(Node *curr = head; curr != NULL; curr = curr -> next)
        hmap[curr] = new Node(curr-> data);
    
    for(Node *curr = head; curr != NULL; curr = curr -> next){
            Node *cloneCurr = hmap[curr]; 
            cloneCurr -> next = hmap[curr -> next]; 
            cloneCurr -> random = hmap[curr -> random];
    }
        
    Node *head2 = hmap[head]; 
    return head2; 
}

// print the node 

void print(Node *head){
    Node *curr = head; 
    while(curr != NULL){
        cout << curr -> data << " "; 
        curr = curr -> next; 
    }
}

int main(){
    Node *head = new Node(10); 
    head -> next = new Node(5); 
    head -> next -> next = new Node(20); 
    head -> next -> next -> next = new Node(15); 
    head -> next -> next -> next -> next = new Node(20); 
    head -> random = head -> next -> next;
    head -> next -> next -> random = head;  
    head -> next -> random  = head -> next -> next -> next; 
    head -> next -> next -> next -> random = head -> next -> next; 
    head -> next -> next -> next -> next -> random = head -> next -> next -> next; 
    Node *head2 = cloneLinkedList(head); 
    print(head2);
    return 0;  
}