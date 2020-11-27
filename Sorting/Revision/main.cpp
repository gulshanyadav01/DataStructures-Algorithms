/* 
author: "gulshan yadav"
date: 27-NOV-2020
*/
#include<iostream>
#include "insertionSort.h"
using namespace std;


int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i]; 
    }
    insertionSort(arr, num);
     
    for(int x: arr){
        cout << x << " "; 
    }
    return 0;

}
