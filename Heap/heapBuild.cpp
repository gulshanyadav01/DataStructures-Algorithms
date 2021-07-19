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
    // this is for insertion
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

    // heapify 
    void MinHeapify(int i){
        int smallest = i; 
        int rt = right(i); 
        int lt = left(i);

        if(lt< size && arr[lt]< arr[i]){
            smallest = lt; 
        }
        if(rt< size && arr[rt]< arr[smallest]){
            smallest = rt; 
        }
        if(smallest != i ){
            swap(arr[i], arr[smallest]);
            MinHeapify(smallest);  
        }
    }

    // extract min 
     int extractMin(){
        if(size <= 0) return INT_MAX; 
        if(size == 1){
            size--; 
            return arr[0];
        }

        swap(arr[0], arr[size-1]); 
        size--; 
        MinHeapify(0);
        return arr[size];
    }

    // decrease key
    void decreaseKey(int i, int x){
        arr[i] = x; 

        while(i!= 0 && arr[i]< arr[parent(i)]){
            swap(arr[i], arr[parent(i)]); 
            i = parent(i); 
        }
    }

    // deletion the value 
    void deletion(int i){
        decreaseKey(i, INT_MIN); 
        extractMin(); 
    }

    // building the heap
    void build(){
    for(int i = (size-2)/2; i >=0; i--){
        MinHeapify(i); 
    }
}

}; 
int main(){
    Heap h(10); 
    

    for(int i =0; i< h.size; i++){
        cout << h.arr[i]<<" "; 
    }
    return 0; 
}




