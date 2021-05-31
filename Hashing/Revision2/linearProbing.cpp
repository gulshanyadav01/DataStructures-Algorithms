/* 
author: gulshan yadav
date: 31-May-2021 
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class MyHash{
    public: 
    int size; 
    int cap; 
    int *arr; 
    MyHash(int c){
        cap = c; 
        size = 0; 
        // arr[cap]; 
        for(int i = 0; i< c; i++){
            arr[i] = -1; 
        }
        for(int i = 0; i< c; i++){
            cout << arr[i] <<  " "; 
        }
    }
    int hash(int key){
        return key%cap; 
    }
    bool search(int key){
        int h = hash(key); 
        int i = h; 
        while(arr[i]!= -1){
            if(arr[i] == key){
                return true; 
            }
            i=(i+1)%cap; 
            if(i == h){
                return false; 
            }

        }
        return false; 
    }

    bool insert(int key){
        if(size == cap){
            return false; 
        }
        int i = hash(key); 
        while(arr[i]!= -1 && arr[i]!= -2 && arr[i]!= key){
            i= (i+1) % cap; 

        }
        if(arr[i] == key) return false; 
        else{
            arr[i] = key; 
            size++; 
            return true; 
        }




    }

}; 

int main(){
    MyHash my(5); 
    cout << my.insert(15);
    cout << my.search(15); 
    return 0; 
}