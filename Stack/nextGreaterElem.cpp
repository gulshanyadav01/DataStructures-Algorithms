/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 24-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printNextGreater(int arr[], int num){
    for(int i = 0; i< num; i++){
        int j; 
        for(j = i+1; j< num; j++){
            if(arr[j] > arr[i]){
                cout << arr[j] <<" ";
                break;
            }
        }
        if(j == num){
            cout << -1 <<" ";
        }
    }
}


vector<int> nextGreater(int arr[], int num){
    vector<int> v; 
    stack<int> s; 
    s.push(arr[num-1]);
    v.push_back(-1);
    for(int i = num-2; i>= 0; i--){
        while(s.empty() == false && s.top()<= arr[i]){
            s.pop();
        }
        int nextGreater = s.empty() ? -1 : s.top();
        v.push_back(nextGreater);
        s.push(arr[i]);
    }
    return v; 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++ ){
        cin >> arr[i];
    }
    printNextGreater(arr, num);
    cout << endl;
    vector<int> k = nextGreater(arr, num);
    reverse(k.begin(), k.end());
    for(int i = 0; i< k.size(); i++){
        cout << k[i] << " ";

    }
    return 0; 
}