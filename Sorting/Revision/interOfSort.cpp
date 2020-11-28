/* 
author: "gulshan yadav"
date: 28-NOV-2020
*/

#include<iostream>
using namespace std;
// this is the efficient solution
void intersectionOfSortedArray(int arr1[], int arr2[], int num1, int num2){
    int i = 0; 
    int j = 0; 
    while(i< num1 && j< num2){
        if(i> 0 && arr1[i] == arr1[i-1]){
            i++; 
            continue; 
        }
        if(arr1[i]< arr2[j]){
            i++; 
        }
        else if (arr1[i] > arr2[j]){
            j++; 
        }
        else if (arr1[i] == arr2[j]){
            cout << arr1[i]<<" "; 
            i++; 
            j++; 
        }
    }
    
}

int main(){
    int num1;
    int num2;
    cin >> num1; 
    cin >> num2; 
    int arr1[num1];
    int arr2[num2]; 
    for(int i = 0; i< num1; i++){
        cin >> arr1[i]; 
    }
    for(int i =0; i< num2; i++){
        cin >> arr2[i]; 
    }
    intersectionOfSortedArray(arr1, arr2, num1, num2);
    return 0; 
}