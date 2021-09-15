/* 
author: gulshan yadav
date: 21-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
// #include "Node.h"
// #include "print.h"
#include<unordered_set>
using namespace std; 
class Node{
    public:
    int data; 
    Node *next; 
    Node(){
        next = NULL; 
    }
    Node(int d){
        data = d; 
        next = NULL; 
    }
}; 

bool detectLoop(Node *head){
    Node *curr = head; 
    
    Node *temp = new Node; 
    while(curr!= head){
        if(curr->next == NULL) return false;
        if(curr->next == temp) return true; 
        Node *curr_next = curr->next; 
        curr->next = temp; 
        curr = curr_next; 
    }
    return false; 
}

bool isLoop(Node *head){
    unordered_set<Node *> s; 
    
    for(Node *curr = head; curr!= NULL; curr = curr->next){
        if(s.find(curr) != s.end()) return true;
        s.insert(curr);
    }
    return false; 
}

// final algorithm : floyd cycle detection method 

bool isCycle(Node *head){
    Node *slow = head, *fast = head; 
    while(fast!= NULL && fast->next!= NULL){
        slow = slow->next; 
        fast = fast->next->next; 
        if(slow == fast) return true; 
    }
    return false; 
}


int main(){
    Node *head = new Node(10); 
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2; 
    temp2->next = temp3; 
    temp3->next = temp1; 
    cout << isCycle(head); 
    return 0; 
}