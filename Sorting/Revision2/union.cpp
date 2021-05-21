/* 
author: gulshan yadav
date: 20-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


// naive solution 
void union1(int arr1[], int arr2[], int num1, int num2){
    int temp[num1+num2]; 
    int k = 0; 
    for(int i = 0; i< num1; i++){
        temp[k++] = arr1[i]; 
    }
    for(int i = 0; i< num2; i++){
        temp[k++] = arr2[i]; 
    }
    sort(temp, temp+k);
    for(int i = 0; i< k; i++){
        if(i== 0 || temp[i] != temp[i-1]){
            cout << temp[i]<<" "; 
        }
    }

}

// efficient solution 

void union2(int arr1[], int arr2[], int num1, int num2){
    int i = 0; 
    int j = 0; 
    while(i< num1 && j< num2){
        if( i> 0 && arr1[i]== arr1[i-1]){
            i++; 
            continue;

        }
        if( j> 0 && arr2[j] == arr2[j-1]){
            j++; 
            continue; 
        }
        if(arr1[i]< arr2[j]){
            cout << arr1[i]<< " "; 
            i++; 
        }
        else if(arr2[j]< arr1[i]){
            cout << arr2[j]<< " "; 
            j++; 
        }
        else if( arr1[i] == arr2[j]){
            cout << arr1[i]; 
            i++; 
            j++; 
        }
         
    }
    while(i< num1){
        if(i> 0 && arr1[i]!= arr1[i-1]){
            cout << arr1[i]<<" "; 
            i++; 
        }
    }
    while(j< num2){
        if(j> 0 && arr2[j] != arr2[j-1]){
            cout << arr2[j]<<" ";
            j++; 
        }
    }
}


int main(){
    int num1, num2; 
    cin >> num1 >> num2; 
    int arr1[num1], arr2[num2]; 
    for(int i =0; i< num1; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i< num2; i++){
        cin >> arr2[i]; 
    }
    // union1(arr1, arr2, num1, num2); 
    cout << "\n"; 
    union2(arr1, arr2, num1, num2); 
    return 0; 
}