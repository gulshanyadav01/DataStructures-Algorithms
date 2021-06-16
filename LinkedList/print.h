#include<iostream>
#include <bits/stdc++.h>

using namespace std; 

void print(Node *head){
    Node *curr =head; 
    while(curr != NULL){
        cout << curr -> data<<" ";
        curr = curr-> next; 
    }
}