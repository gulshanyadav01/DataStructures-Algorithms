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


// method 2: 
// O(N)
// space : O(1)

Node *clone(Node *head){

    for(Node *curr = head; curr != NULL;){
        Node *next = curr -> next; 
        curr -> next  = new Node(curr -> data); 
        curr -> next -> next = next; 
        curr = next; 
    }

    for(Node *curr = head; curr != NULL; curr = curr-> next->next){
        curr->next->random = (curr-> random != NULL) ? curr -> random -> next : NULL; 
    }

    Node* original = head, *copy = head->next; 
  
    Node *temp = copy; 
  
    while (original && copy) 
    { 
        original->next = 
         original->next? original->next->next : original->next; 
  
        copy->next = copy->next?copy->next->next:copy->next; 
        original = original->next; 
        copy = copy->next; 
    } 
  
    return temp;
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
    Node *head2 = clone(head); 
    print(head2);
    return 0;  
}