/* 
author: *gulshan yadav*
date: 09-oct-2020
*/
#include<iostream>
using namespace std;
void waveArray(int arr[], int num){
    for(int i= 0, j= i+1; i< num-1; i= i+2){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0; i< num; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
       int num;
    cin >> num;
    int arr[ num ];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    waveArray(arr, num);
    return 0;
}