/* 
author: gulshan yadav
date: 21-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
#include<unordered_set>
using namespace std; 

void intersection(Node *head1, Node *head2){
    unordered_set<Node *> s; 
    for(Node *curr = head1; curr!= NULL; curr = curr->next){
        s.insert(curr);
    }
    for(Node *curr = head2; curr!= NULL; curr = curr->next){
        if(s.find(curr) != s.end()){
            cout << curr->data; 
            break;
        }
        
    }
    
}

// method 2
int length(Node *head){
    Node *curr = head; 
    int count =0;
    while(curr!= NULL){
        count++; 
        curr = curr->next; 
    }
    return count; 
}

int intersection2(Node *head1, Node *head2){
    int c1 = length(head1); 
    int c2 = length(head2);
    Node *curr1 = head1; 
    Node *curr2 = head2; 
    int  d = abs(c1-c2); 
    if(c1>c2){
        for(int i = 0; i < d; i++){
            curr1 = curr1->next; 
        }
    }else{
        for(int i = 0; i< d; i++){
            curr2 = curr2->next; 
        }
        
    }
    while(curr1!= NULL && curr2!= NULL){
        if(curr1== curr2) return curr1->data; 
        curr1 = curr1->next; 
        curr2 = curr2->next; 
    }
    return -1; 

}

int main(){
    Node *head1 = new Node(5); 
    Node *temp1 = new Node(8);
    Node *temp2 = new Node(7); 
    Node *temp3 = new Node(10); 
    Node *temp4 = new Node(12); 
    Node *temp5 = new Node(15); 
    head1->next = temp1;
    temp1->next = temp2; 
    temp2->next = temp3; 
    temp3->next = temp4; 
    temp4->next = temp5; 
    Node *head2 = new Node(9); 
    head2->next = temp3; 
    cout << intersection2(head1, head2); 
    return 0; 
}
