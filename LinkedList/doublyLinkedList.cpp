/* 
author: gulshan yadav
date: 11-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "DNode.h"
#include "print.h"
using namespace std; 



int main(){
    Node *head = new Node(10); 
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1; 
    temp1->prev = head; 
    temp1 -> next = temp2; 
    temp2-> prev = temp1; 
    print(head); 
    

}
