/* 
author: gulshan yadav
date: 17-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

void  deleteNNodes(Node *head, int m, int n){
     
     Node *curr  = head; 
        while(curr){
            for(int i = 0; i< m-1 && curr!= NULL; i++){
                curr = curr->next; 
            }
            if(curr == NULL) return;
            Node *temp = curr->next; 
            for(int i = 1 ; i<= n && temp!= NULL; i++){
                Node *t = temp; 
                temp = temp->next;
                delete t; 
                
            }
            curr->next = temp; 
            curr = temp; 
        }

}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(50);
    head->next->next->next->next = new Node(60); 
    head->next->next->next->next->next = new Node(70); 
    head->next->next->next->next->next->next = new Node(80); 
    head->next->next->next->next->next->next->next= new Node(90); 
    int m, n; 
    cin >> m >> n; 
    print(head);
    cout << endl;
    deleteNNodes(head, m, n);
    print(head);
    return 0; 

}