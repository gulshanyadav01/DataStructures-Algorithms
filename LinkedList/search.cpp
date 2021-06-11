/* 
author: gulshan yadav
date: 11-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include "Node.h"
#include "print.h"
using namespace std;

int search(Node *head, int x){
    int count = 1; 
    if(head == NULL) return -1; 
    Node *curr = head; 
    while(curr!= NULL){
        if(curr ->data == x) return count; 
        count++; 
        curr = curr-> next; 
    }
    return -1; 
}

// recursively 

int searchRec(Node *head, int x){
    if(head == NULL ) return -1;
    if(head-> data == x) return 1; 

    else{
        int res = searchRec(head-> next, x); 
        if(res == -1) return -1; 
        else{
            return res+1; 
        }
    }
}

int main(){
    Node *head = new Node(10); 
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    cout << search(head, 20); 
    cout << endl;
    cout << searchRec(head, 40); 
    return 0; 
}