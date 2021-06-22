/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 22-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data; 
    Node *next; 
    Node(int x){
        data =x; 
        next  = NULL; 
    }
};

class MyStack{
    public:
    Node *head; 
    int size; 
    MyStack(){
        head = NULL;
        size = 0; 
    }

    void push(int x){
        Node *temp = new Node(x);
        temp->next = head; 
        head = temp; 
        size++; 
    }
    int pop(){
        if(head == NULL) return INT_MAX; 
        int ans = head->data; 
        Node *temp = head; 
        head = head->next; 
        delete temp; 
        size--; 
        return ans; 
    }

    int Size(){
        return size; 
    }
    bool isEmpty (){
        return (head == NULL);
    }
    int peak(){
        if(head == NULL) return INT_MAX;
        return head->data; 
    }

};

int main(){
    MyStack st; 
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.pop()<<endl;
    cout << st.Size()<<endl;
    
    return 0; 
}