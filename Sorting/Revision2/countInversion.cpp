/* 
author: gulshan yadav
date: 21-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int countInversion1(int arr[], int num){
    int res = 0; 
    for(int i =0; i< num-1; i++){
        for(int j = i+1; j< num; j++){
            if(arr[i]> arr[j]) res++; 
        }
    }
    return res; 
}

// efficient solution 

int countAndMerge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1; 
    int n2 = r-mid; 
    int left[n1]; 
    int right[n2]; 
    for(int i = 0; i< n1; i++){
        left[i] = arr[l+i];
    }
    for(int i = 0; i< n2; i++){
        right[i] = arr[mid+1+i];
    }
    int i = 0, j= 0, res = 0, k = l;
    while(i< n1 && j< n2){
        if(left[i]<= right[j]){
            arr[k] = left[i]; 
            i++; 
            k++; 
        }
        else {
            arr[k] = right[j]; 
            j++; 
            k++; 
            res = res+(n1-i); 
        }
    }
    while(i< n1){
        arr[k] = left[i]; 
        i++; 
        k++; 
    }
    while(j< n2){
        arr[k] = right[j];
        j++; 
        k++; 
    }
    return res; 
}

int countInversion2(int arr[], int l, int r){
    if(r== l){
        return 0;
    }
    int res = 0; 
    
        int mid = (l+r)/2;
        res+= countInversion2(arr, l, mid); 
        res+= countInversion2(arr, mid+1, r); 
        res+= countAndMerge(arr, l, mid, r);
    return res; 
}


int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    cout << countInversion1(arr, num); 
    cout <<"\n"; 
    cout << countInversion2(arr, 0, num-1); 
    return 0; 
}