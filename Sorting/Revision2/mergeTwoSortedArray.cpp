/* 
author: gulshan yadav
date: 20-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void mergeTwoSortedArray(int arr1[], int arr2[], int num1, int num2){
    int i = 0; 
    int j = 0; 
    while(i< num1 && j< num2){
        if(arr1[i]<= arr2[j]){
            cout << arr1[i]<<" "; 
            i++; 
        }
        else if(arr2[j]<= arr1[i]){
            cout << arr2[j]<<" "; 
            j++; 
        }
    }
    for(; i< num1; i++){
        cout << arr1[i]<<" "; 
    }
    for(; j< num2; j++){
        cout << arr2[j]<<" "; 
    }

}
int main(){
    int num1, num2; 
    cin >> num1 >> num2; 
    int arr1[num1], arr2[num2]; 
    for(int i = 0; i< num1; i++){
        cin >> arr1[i]; 
    }
    for(int i = 0; i< num2; i++){
        cin >> arr2[i]; 
    }
    mergeTwoSortedArray(arr1, arr2,  num1, num2); 
    return 0; 
}