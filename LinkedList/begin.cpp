/*
author:"gulshan yadav",
email:"gulshany01@gmail.com",
date:"21-DEC-2020"
*/

#include<iostream>
using namespace std;

class Node {
    public:
    int data; 
    Node *next;
    Node(int x){
        data=  x; 
        next = NULL; 
    }
};

int main(){

    Node *head = new Node(10); 
    cout << head->data<< "\n";
    cout << head<< endl;
    return 0; 

}