/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

void cycleSort(int arr[], int num){
    for(int cs = 0; cs< num-1; cs++){
        int item= arr[cs]; 
        int pos = cs; 
        for(int i = cs+1; i< num; i++){
            if(arr[i]< item){
                pos++; 
            }
        }
        int temp = arr[pos]; 
        arr[pos] = item; 
        item = temp; 
        while(pos!= cs){
            pos = cs; 
            for(int i = cs+1; i< num; i++){
                if(arr[i]< item){
                    pos++; 
                }
            }
        int temp = arr[pos]; 
        arr[pos] = item; 
        item = temp; 


        }
    }
}


int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    for(int i = 0; i< num; i++){
        cout << arr[i]<<" "; 
    }
    cout <<"\n";
    cycleSort(arr, num); 
    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0; 

}