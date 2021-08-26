#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void insert(vector<int> &arr, int temp){
    if(arr.size() == 0 && arr[arr.size()-1] <= temp){

        arr.push_back(temp);
        return ; 
    }

    int val = arr[arr.size()-1]; 
    arr.pop_back();
    insert(arr, temp);
    arr.push_back(val); 
}

void sorting(vector<int> &arr){
    if(arr.size() == 1){

        return; 
    }

    int temp = arr[arr.size() -1 ]; 
    arr.pop_back(); 

    sorting(arr); 

    insert(arr, temp); 
}

int main(){
    int num; 
    cin >>  num; 
    vector<int> arr; 

    for(int i = 0; i< num; i++){
        int a ;
        cin >> a; 
        arr.push_back(a); 
    }

    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    sorting(arr); 

    for(int i: arr){
        cout << i << " ";
    }

    return 0; 
}