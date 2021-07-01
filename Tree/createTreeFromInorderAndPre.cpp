#include<iostream>
#include "Node.h"
using namespace  std; 
int preIndex = 0; 

Node *createTree(int in[], int pre[], int is, int ie){

if(is> ie) return NULL; 

Node *root = new Node(pre[preIndex++]); 

int inIndex; 
for(int i = is; i<= ie; i++){
if(in[i]== root->data){
inIndex = i; 
break; 
}
}
root-> left = createTree(in, pre, is, inIndex-1); 
root-> right = createTree(in, pre, inIndex+1, ie); 
return root; 

}

// inorder traversal

void printTree(Node *root){
    if(root!= NULL){
        printTree(root-> left);
        cout << root-> data<<" ";
        printTree(root-> right);
    }
}

int main(){
int in[5] = {20, 10, 40, 30, 50};
int pre[5] = {10, 20, 30, 40, 50};
Node *root = createTree(in, pre, 0, 4);
printTree(root);
return 0; 
}
