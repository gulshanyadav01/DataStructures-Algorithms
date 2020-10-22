/* 
author: *gulshan yadav*
date: 22-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class myHash{
    public: 
    int bucket; 
    int arr[7] = {0}; 
    int size = 0; 

    myHash(int b){
        bucket = b;
        
    }

    void insert(int key ){
        int i = key % bucket; 
        arr[i] = key; 
        cout << arr[i] << endl;
        size++;
    }

   bool search(int key){
       int i = key % bucket; 
       int s = i; 
       if(arr[i] == key ){
           return true;
       }
       for(int k = i+1; i< bucket; i++){
           if(arr[k % bucket] == key){
               return true;
           }
           if(arr[k % bucket ] == 0){
               return false;
           }
           if(arr[k % bucket ] == s ){
               return false;
           }
       }
       return false;
   }


   void remov(int key ){
       int i = key % bucket; 
       arr[i] = -1; 
       size--;

   }

   int  length ( ){
       return size;
   }
    
};

int main(){
    cout <<" enter the  bucket value "<< " \n";
    myHash hey(7);

    hey.insert(10); 
    hey.insert(20);
    hey.insert(50);
    cout << hey.search(10)<< endl;
    cout << hey.search(20)<<endl;
    hey.remov(10);
    cout << hey.search(50)<<endl;
    cout << hey.search(10)<<endl;
    hey.remov(64);
    cout << hey.length()<< "\n";
    // cout << hey.size1()<< "\n";
    return 0;
  

}