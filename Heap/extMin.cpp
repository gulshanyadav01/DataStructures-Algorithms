/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 19-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class MinHeap{
    
    int size; 
    int cap; 
    int *arr;
    public:
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

}; 


int main(){
    MinHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.insert(15);
    h.insert(20);
    cout << h.extractMin() << " ";
    cout << h.extractMin() << " ";
    cout << h.extractMin() << " ";
    return 0; 
}