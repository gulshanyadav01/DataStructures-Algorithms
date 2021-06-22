/* 
author: gulshan yadav
date: 22-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
// #include "Node.h"
// #include "print.h"
#include<stack>
using namespace std;

class Node{
    public: 
    char c; 
    Node *next; 
    Node (char x){
        c = x; 
        next = NULL; 
    }

};

void print(Node *head){
    Node *curr =head; 
    while(curr!= NULL){
        cout << curr->c<<" "; 
        curr = curr->next;
    }
}

bool isPalindrome(Node *head){
    stack<char> st; 
    for(Node *curr =head; curr!= NULL; curr = curr->next){
        st.push(curr->c);
    }
    for(Node *curr = head; curr!= NULL; curr = curr->next){
        if(st.top()!= curr->c)return false; 
        st.pop();
    }
    return true; 
}


int main(){
    Node *head = new Node('r');
    head->next = new Node('a');
    head->next->next = new Node('d'); 
    head->next->next->next = new Node('a');
    head->next->next->next->next = new Node('r'); 
    cout << isPalindrome(head); 
    return 0; 
}