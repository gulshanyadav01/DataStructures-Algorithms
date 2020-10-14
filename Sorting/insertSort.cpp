/* 
author: *gulshan yadav*
date: 14-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void insertionSort(int arr[], int num){
    for(int i= 1; i< num; i++){

        int key = arr[i];
        for(int j= i-1; j>= 0 ; j--){
            if(arr[j] > key){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]  = temp;
            }
        }

    }
    for(int i=0; i< num; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int num; 
    cin>> num;
    int arr[num];
    for(int i= 0; i< num; i++){
        cin >> arr[i];
    }
    insertionSort(arr, num);
    return 0;
}