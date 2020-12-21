/*
author:"gulshan yadav",
email:"gulshany01@gmail.com",
date:"21-DEC-2020"
*/

#include<iostream>
using namespace std;

class Node {
    public:
    int data; 
    Node *next;
    Node(int x){
        data=  x; 
        next = NULL; 
    }
};

int main(){

    Node *head = new Node(10);
    Node *temp1 = new Node(20); 
    Node *temp2 = new Node(30);
    head->next = temp1; 
    temp1->next = temp2; 
    while(head != NULL){
        cout << head->data<< "\n"; 
        head = head->next; 
    }
    return 0; 

}