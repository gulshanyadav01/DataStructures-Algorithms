/* 
author: gulshan yadav
date: 21-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include "Node.h"
#include "print.h"
using namespace std; 

void removeDupSorted(Node *head){
    Node *curr = head; 
    while(curr!= NULL && curr->next!= NULL){
        if(curr->data == curr->next->data){
            Node *temp = curr->next; 
            curr->next = curr->next->next; 
            delete temp; 
        }else{
            curr = curr->next; 
        }
    }
    // return head; 
}
int main(){
     Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(20);
    print(head);
    cout << endl;
    removeDupSorted(head);
    print(head);
    return 0; 

}