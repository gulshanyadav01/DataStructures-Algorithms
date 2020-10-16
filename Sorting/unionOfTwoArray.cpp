/* 
author: *gulshan yadav*
date: 16-oct-2020
*/
#include<iostream>
#include<algorithm>
using namespace std;

// naive approach time complexity for this approach is Q((m+nlog(m+n)))
void unionOfTwoArray(int arr1[],int arr2[], int num1, int num2){
    int arr3[num1+ num2];
    int i = 0;
    for(; i< num1; i++){
        arr3[i] = arr1[i];
    }
    for(int j = 0; j< num2; i++, j++){
        arr3[i] = arr2[j];
    }
    // sor the array 3
    sort(arr3, arr3 + num1 + num2);
    cout << arr3[0]<< " "; 
    for(int k= 1; k < num1 + num2; k++){
        
        if(arr3[k] != arr3[k-1] ){
            cout << arr3[k] <<" ";
        }
    }
}

// efficient solution of union of two sorted array

void unionOfTwoSortedArray(int arr1[],int arr2[], int num1, int num2){

    int i =0 ; 
    int j= 0; 
    while(i< num1 && j< num2){
        if(i> 0 && arr1[i-1] == arr1[i]) i++; continue; 
        if(j> 0 && arr2[j-1] == arr2[j]) j++; continue;
        if(arr1[i] < arr2[j]) cout << arr1[i] << " "; i++;
        if(arr2[j] < arr1[i]) cout << arr2[j] << " "; j++;
        if(arr1[i] == arr2[j]) cout << arr1[i]<<" "; i++; j++;
    }
    while(i< num1){
        cout << arr1[i]<< " ";
        i++;
    }
    while(j< num2){
        cout << arr2[j]<<" ";
        j++;
    }
}

int main(){
    int num1,num2 ;
    cin >> num1 >> num2;
    int arr1[num1];
    int arr2[num2];
    for(int i= 0; i< num1; i++){
        cin>> arr1[i];
    }
    for(int i=0; i<num2; i++){
        cin >> arr2[i];
    }
    // unionOfTwoArray(arr1, arr2, num1, num2);
    unionOfTwoSortedArray(arr1, arr2, num1 , num2);
    return 0;
}