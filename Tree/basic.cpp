/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 29-jun-2021
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data; 
    Node *left; 
    Node *right;
    Node(int k){
        data = k; 
        left = NULL; 
        right = NULL; 
    }

}; 

void  change(int &d){
    d = 10; 
}


int main(){
    int k = -1; 
    change(k); 
    cout << k <<endl;
    return 0; 
}
