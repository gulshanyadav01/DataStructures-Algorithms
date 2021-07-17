#include<iostream>
using namespace std; 

class Queue{
    public:
    int size; 
    int cap; 
    int front; 
    int *arr; 
    Queue(int c){
        cap = c; 
        size = 0; 
        front = 0; 
        arr = new int[cap];
    }
    bool isEmpty(){
        return (size == 0);
    }
    bool isFull(){
        return (size == cap);
    }
    int getRear(){
        return (front+size-1) %cap;
    }
    int getFront(){
        return front; 
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
        int front = getFront(); 
        front = (front+1)%cap;
        size--; 
    }
};

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50); 
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(50);
    // cout<< q.front;
    cout << q.size; 
    return 0; 
}