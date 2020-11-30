/* 
author: "gulshan yadav"
date: 30-NOV-2020

*/
#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high]; 
    int i = low-1; 
    for(int j = low; j<= high; j++){
        if(arr[j]< pivot){
            i++; 
            int temp = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] = temp; 
        }
    }
    int temp  = arr[i+1]; 
    arr[i+1] = arr[high]; 
    arr[high] = temp; 
    return i+1; 

}

int kthSmallest(int arr[], int num, int k){
    int low = 0; 
    int high = num-1; 
    while(low<= high){
        int p = partition(arr, low, high); 
        if(p == k-1){
            return arr[p]; 
        }
        else if(p> k-1){
            high = p-1;
        }
        else if (p< k-1){
            low = p+1;
        }
    }
    return -1;
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

    cout << kthSmallest(arr, num, k);


    return 0;

}