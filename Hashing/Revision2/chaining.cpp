/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class myHash{
    public: 
    int bucket; 
    list<int> *table; 
    myHash(int b){
        bucket=b; 
        table = new list<int> [b]; 
    }
    void insert(int key){
        int i = key%bucket; 
        table[i].push_back(key); 
    }
    void delet(int key){
        int i = key%bucket; 
        table[i].remove(key); 
    }

    bool search(int key){
        int i = key%bucket; 
        for(auto x: table[i]){
            if(x== key)return true; 
        }
        return false; 
    }


}; 

int main(){
    int bucket; 
    cin >> bucket; 

    myHash hello(bucket); 
    hello.insert(70); 
    hello.insert(71); 
    hello.insert(9);
    hello.insert(56); 
    hello.insert(72); 
    cout << hello.search(56);
    cout << hello.search(4); 
    return 
}