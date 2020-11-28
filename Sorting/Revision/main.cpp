/* 
author: "gulshan yadav"
date: 27-NOV-2020
*/
#include<iostream>
#include "insertionSort.h"
#include "mergeFunction.h"
using namespace std;


int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    // insertionSort(arr, num);
    mergeSort(arr, 0, num-1); 

    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0;

}
