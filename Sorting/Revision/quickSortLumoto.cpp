/* 
author: "gulshan yadav"
date: 30-NOV-2020

*/
#include<iostream>
using namespace std;
// this is lomuto partition
int partition(int arr[], int low, int high){
    int pivot = arr[high]; 
    int i = low-1; 
    int j = low; 
    for(int j = low; j<= high; j++){
        if(arr[j]< pivot){
            i++; 
            int temp = arr[j]; 
            arr[j] = arr[i]; 
            arr[i] = temp;
        }
    }
    int temp = arr[high]; 
    arr[high] = arr[i+1];
    arr[i+1] = temp;
    return i+1; 
}

// quick sort

void quickSort(int arr[], int low, int high){
    if(low< high){
        int p = partition(arr, low, high); 
        quickSort(arr, low, p-1); 
        quickSort(arr, p+1, high); 
    }
}


int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    quickSort(arr, 0, num-1); 

    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0;

}