#include<iostream>
#include <bits/stdc++.h>

using namespace std; 

void print(Node *head){
    while(head != NULL){
        cout << head -> data<<" ";
        head = head-> next; 
    }
}