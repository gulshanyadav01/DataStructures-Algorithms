/* 
author: "gulshan yadav"
date: 02-DEC-2020

*/
#include<iostream>
using namespace std;

// this is for negative and positive
// i did all variation in this 
// with little tweek
void sortOfTwoTypes(int arr[], int low, int high){
    int i = low-1; 
    int j = high+1; 
    while(true){
        do{
            i++; 
        }
        while(arr[i] %2 != 0);
        do{
            j--;
        }while(arr[j] %2 == 0);
        if(i >= j) return;
        int temp = arr[i]; 
        arr[i] = arr[j]; 
        arr[j] = temp; 
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }

    sortOfTwoTypes(arr, 0, num-1); 

    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}