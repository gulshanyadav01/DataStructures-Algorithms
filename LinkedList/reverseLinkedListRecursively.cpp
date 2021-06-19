/* 
author: gulshan yadav
date: 19-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

Node *reverseRecursively(Node *head){
    if(head == NULL || head->next == NULL)return head; 
    Node *recHead = reverseRecursively(head->next);
    Node *recTail = head->next; 
    recTail->next = head; 
    head->next = NULL;
    return recHead; 
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(50);
    print(head);
    cout << endl;
    head = reverseRecursively(head);
    print(head);
    return 0; 
}
