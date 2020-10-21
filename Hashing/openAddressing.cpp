/* 
author: *gulshan yadav*
date: 21-oct-2020
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

    myHash(int b){
        bucket = b;
        
    }

    void insert(int key ){
        int i = key % bucket; 
        arr[i] = key; 
        cout << arr[i] << endl;
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
    
};

int main(){
    cout <<" enter  bucket value "<< " \n";
    myHash hey(7);

    hey.insert(10); 
    hey.insert(20);
    hey.insert(50);
    cout << hey.search(10);
    cout << hey.search(20);
    cout << hey.search(50);
    // cout << hey.size1()<< "\n";
    return 0;
  

}