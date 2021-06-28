/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 27-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int front, cap, size; 
    int *arr; 
    Queue(int c){
        cap = c; 
        size = 0; 
        front = 0; 
        arr = new int[cap];
    }
    bool isFull(){
        return (cap == size);
    }
    bool isEmpty(){
        return (size == 0);
    }
    int getFront(){
        if(isEmpty())return -1; 
        else return front; 
    }
    int getRear(){
        if(isEmpty()) return -1; 
        else return (front+size-1)%cap; 
    }
    void enqueue(int x){
        if(isFull()) return; 
        int rear = getRear();
        rear = (rear+1)%cap; 
        arr[rear] = x; 
        size++;
    }
    void dequeue(){
        if(isEmpty()) return; 
        front = (front + 1) % cap;
        size--; 
    }
    

};

int main(){
    Queue Q(3);
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.dequeue();
    cout << Q.getFront()<< endl;
    return 0; 
}