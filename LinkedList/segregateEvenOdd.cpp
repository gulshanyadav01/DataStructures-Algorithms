/* 
author: gulshan yadav
date: 21-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

Node *segregate(Node *head){
    Node *eS=NULL,*eE=NULL,*oS=NULL,*oE=NULL;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        int x=curr->data;
        if(x%2==0){
            if(eS==NULL){
                eS=curr;
                eE=eS;
            }else{
                eE->next=curr;
                eE=eE->next;
            }
        }else{
            if(oS==NULL){
                oS=curr;
                oE=oS;
            }else{
                oE->next=curr;
                oE=oE->next;
            }
        }
    }
    if(oS==NULL||eS==NULL)
        return head;
    eE->next=oS;
    oE->next=NULL;
    return eS;
}


int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head = segregate(head); 
    print(head);
    return 0; 

    
}