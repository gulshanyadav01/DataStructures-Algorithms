/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 28-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data; 
    Node *next; 
    Node(int x){
        data = x; 
        next = NULL;
    }

};

class Queue{
    public:
    Node *front, *rear; 
    int size; 
    Queue(){
        front = NULL; 
        rear = NULL; 
        size = 0; 
    }

    void  enQueue(int x){
        Node *temp  = new Node(x);
        if(front == NULL){
            front = rear = temp; 
            size++; 
            return ; 
        }
        rear->next = temp; 
        rear = rear->next; 
    }
    
    void deQueue(){
        if(front == NULL) return; 
        Node *temp = front; 
        front = front -> next; 
        if(front == NULL) rear = NULL; 
        size--; 
        delete temp; 
    }

    int getSize(){
        return size; 
    }
    void print(){
        while(front != NULL){
            cout << front -> data <<" ";
            front = front -> next; 
        }
    }


};

int main(){
    Queue Q;
    // Node *head;  
     Q.enQueue(10);
    Q.enQueue(20);
    Q.enQueue(30);
    Q.deQueue();
    Q.print();
    // cout << Q.getSize() ; 
    return 0; 
}