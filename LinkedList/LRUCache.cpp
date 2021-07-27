/* 
author: gulshan yadav
date: 27-july-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std; 

class LRUCache {
public:
    class Node{
        public:
            int val; 
            int key; 
            Node *next; 
            Node *prev;
        Node(int key_, int val_){
            key = key_; 
            val = val_;
        }
    }; 
    Node *head = new Node(-1, -1); 
    Node *tail = new Node(-1, -1); 
    int cap; 
    unordered_map<int, Node*> m; 
    
    LRUCache(int capacity) {
        cap  = capacity; 
        head->next = tail; 
        tail->prev = head; 
    }
    
    void addNode(Node *newNode){
        Node *temp = head->next; 
        newNode -> next = temp; 
        newNode->prev = head; 
        head->next = newNode; 
        temp->prev = newNode; 
        
    }
    void deleteNode(Node *delNode){
        Node *delprev = delNode->prev; 
        Node *delnext = delNode->next; 
        delprev-> next = delnext; 
        delnext-> prev = delprev; 
    }
    
    int get(int key) {
        if(m.find(key) != m.end()){
            Node *resNode = m[key];
            int res = resNode->val;
            m.erase(key); 
            deleteNode(resNode);
            addNode(resNode);
            m[key] = head->next; 
            return res; 
        }
        return -1; 
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            Node *existNode = m[key];
            m.erase(key); 
            deleteNode(existNode); 
        }
        if(m.size() == cap){
            m.erase(tail->prev->key); 
            deleteNode(tail->prev);
        }
        addNode(new Node(key, value)); 
        m[key] = head->next; 
    }
};

int main(){
    LRUCache* obj = new LRUCache(2);
    obj->put(1,5);
    obj->put(2,10);
    obj->put(3, 20); 
    int param_1 = obj->get(3);
    cout << param_1<<" ";
    return 0; 
}
 