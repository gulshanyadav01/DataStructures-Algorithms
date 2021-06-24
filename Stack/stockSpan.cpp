/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 24-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSpan(int arr[], int num){
    for(int i = 0; i< num; i++){
        int span = 1; 
        for(int j = i-1; j>= 0 && arr[j]<= arr[i]; j--){
            span++;
        }
        cout << span<<" ";
    }
}
int main(){
    int num; 
    cin >> num; 
    int *arr; 
    arr = new int[num];
    for(int i = 0; i< num; i++ ){
        cin >> arr[i];
    }
    printSpan(arr, num);
    return 0; 
}