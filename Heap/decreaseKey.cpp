/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 19-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class MinHeap{
    
    
    public:
    int size; 
    int cap; 
    int *arr;
    MinHeap(int c){
        cap = c; 
        size = 0; 
        arr = new int[c]; 
    }

    int left(int i){
        return (2*i+1); 
    }

    int right(int i){
        return (2*i+2);
    }

    int parent(int i){
        return (i-1)/2; 
    }

    void swap(int &a, int &b){
        int temp = a; 
        a = b; 
        b = temp; 
    }

    // insert into heap;

    void insert(int x) 
    { 
    if (size == cap)return;
    size++; 
    arr[size-1]=x; 
 
    for (int i=size-1;i!=0 && arr[parent(i)]>arr[i];) 
    { 
       swap(arr[i], arr[parent(i)]); 
       i = parent(i); 
    } 
    }

    // decrease the key

    void decreaseKey(int i, int x){
        arr[i] = x; 

        while(i!= 0 && arr[i]< arr[parent(i)]){
            swap(arr[i], arr[parent(i)]); 
            i = parent(i); 
        }
    }


}; 


int main(){
    MinHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.insert(15);
    h.insert(20); 
    h.decreaseKey(3, 1); 

    for(int i = 0; i< h.size; i++){
        cout << h.arr[i]<<" "; 
    }
    return 0; 
}