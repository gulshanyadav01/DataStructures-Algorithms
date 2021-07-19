/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 19-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include "/home/gulshan/Desktop/geekForGeeks/Tree/Node.h"
using namespace std;

class Heap{
    public:
        int *arr; 
        int size; 
        int cap; 
    Heap(int c){
        cap  = c; 
        size = 0; 
        arr = new int[cap];
    }

    int left(int i){
        return (2*i)+1;
    }

    int right(int i){
        return (2*i)+2;
    }

    int parent(int i){
        return (i-1)/2; 
    }

    void insert(int x){
        size++; 
        arr[size-1] = x; 
        for(int i = size-1; i!= 0 && arr[parent(i)] > arr[i]; ){
            int temp = arr[parent(i)]; 
            arr[parent(i)] = arr[i]; 
            arr[i] = temp;
            i = parent(i);
        }
    }

}; 

int main(){
    Heap h(10); 
    int k; 
    cin >>k; 
    while(k!= -1){
        h.insert(k); 
        cin >> k;
    }
    for(int i = 0; i< h.size; i++){
        cout << h.arr[i]<<" ";
    }
    return 0; 

}