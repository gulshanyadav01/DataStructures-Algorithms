/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 28-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Deque{
    public:
    int front,size,cap;
    int *arr; 
    Deque(int c){
        cap = c; 
        size = 0; 
        front = 0;
        arr = new int[cap];
    }

    bool isEmpty(){ return (size == 0);}
    bool isFull(){ return (size== cap); }

    void insertFront(int x){
        if(isFull()) return; 
        front = (front + cap - 1) % cap; 
        arr[front]  = x; 
        size++; 
    }

    void insertRear(int x){
        if(isFull()) return; 
        int newRear = ( front + size  ) % cap; 
        arr[newRear] = x; 
        size++; 
    }

    void deleteFront(){
        if(isEmpty()) return; 
        front = ( front + 1) % cap; 
        size--; 
    }

    void deleteRear(){
        if(isEmpty()) return; 
        size--; 
    }
    int getFront(){
        if(isEmpty()) return -1; 
        else {
            return front; 
        }
    }
    int getRear(){
        if(isEmpty()) return -1; 
        return (front + size - 1) % cap; 
    }

};

int main(){
    Deque Q(4); 

}