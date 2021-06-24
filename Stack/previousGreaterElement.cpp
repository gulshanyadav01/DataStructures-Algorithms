/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 24-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printPreviosGreater(int arr[], int num){
    for(int i = 0; i< num; i++){
        int j; 
        for(j = i-1; j>= 0; j--){
            if(arr[j]> arr[i]){
                cout << arr[j] <<" ";
                break;
            }
        }
        if(j == -1){
            cout << -1 << " ";
        }
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++ ){
        cin >> arr[i];
    }
    printPreviosGreater(arr, num);

    return 0; 
}