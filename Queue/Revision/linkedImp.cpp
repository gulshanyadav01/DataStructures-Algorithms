#include<iostream>
using namespace std; 

class Node{
    public: 
    Node *next; 
    int data; 
    Node(int x){
        data = x; 
        next = NULL; 
    }

}; 

class Queue{
    public:
    Node *front; 
    Node *rear; 
    int size;
    Queue(){
        front = NULL; 
        rear = NULL; 
        size = 0; 
    }

    void enqueue(int x){
        Node *temp = new Node(x);
        if(front == NULL){
            front = rear = temp;
        }
        rear -> next =temp; 
        rear = temp; 
        size++; 
    }

    int  dequeue(){
        if(front == NULL) return -1;

        Node *temp = front; 
        int x = temp-> data; 
        front = front -> next; 
        if(front == NULL) rear = NULL; 
        delete temp;
        size--; 
        return x; 
    }
}; 
int main(){

    Queue q; 
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30); 
    cout << q.dequeue()<<endl;
    cout <<q.dequeue()<<endl;
    cout << q.dequeue()<<endl;
    return 0; 

}