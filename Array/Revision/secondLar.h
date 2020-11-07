/*

author:"gulshan yadav",
date: 07-NOV-2020

*/

#include<iostream>
using namespace std; 


int secondLargest(int arr[], int num){
    int res = -1; 
    int lar = arr[0]; 

    for(int i = 1; i< num; i++){
        if(arr[i] > lar){
            res = lar;
            lar = arr[i]; 
        }

       else  if(arr[i]> res || res == -1){
            res = arr[i]; 
        }
    }
    return res; 
}

