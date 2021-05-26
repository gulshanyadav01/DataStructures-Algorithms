/* 
author: gulshan yadav
date: 26-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

void countingSort(int arr[], int num, int k ){
    int count[k]; 
    for(int i = 0; i< k; i++){
        count[i] = 0;
    }
    for(int i = 0; i< num; i++){
        count[arr[i]]++; 
    }
    //
    int indx = 0;  
    for(int i =0; i< k; i++){
        for(int j = 0; j< count[i]; j++){
            arr[indx] = i; 
            indx++; 
        }
    }

}


// general purpose implemenation 

void countingSort2(int arr[], int num , int k ){
    int count[k]; 
    for(int i =0; i< k; i++){
        count[i] = 0; 
    }
    for(int i = 0; i< num; i++){
        count[arr[i]]++; 
    }
    for(int i =1; i< num; i++){
        count[i] = count[i-1] + count[i];
    }
    // now do the output array
    int output[num];
    for(int i =0; i< num; i++){
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--; 
    }
    for(int i =0; i< num; i++){
        arr[i] = output[i];
    }

}



int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    int k; 
    cin >> k;
    for(int i = 0; i< num; i++){
        cout << arr[i]<<" "; 
    }
    cout <<"\n";
    // countingSort(arr, num, k); 
    // cout<<"\n";
    countingSort2(arr, num, k); 
    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0; 

}