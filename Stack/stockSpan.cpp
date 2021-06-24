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

// efficient solution 
void print(){
    cout << "gulshan";
}

void printStockSpan(int arr[], int num){
    stack<int> s; 
    s.push(0);
    cout << 1<<" ";
    for(int i = 1; i< num; i++){
        while(s.empty() == false && arr[s.top()] <= arr[i]){
            s.top();
        }
        int span = s.empty() ? i+1 : i-s.top();
        cout << span << " ";
        s.push(i);
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++ ){
        cin >> arr[i];
    }
    printSpan(arr, num);
    cout << endl;
    printStockSpan(arr, num);

    return 0; 
}