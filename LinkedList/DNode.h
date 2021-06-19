/* 
author: gulshan yadav
date: 11-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>

class Node{
    public: 
    int data; 
    Node *prev;
    Node *next; 
    Node(int x){
        data = x; 
        prev = NULL; 
        next = NULL; 
    }
};