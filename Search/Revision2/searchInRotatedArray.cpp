/* 
author: gulshan yadav
date: 17-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution would be search linearly; 
// time of this solution : Q(n); 

// efficient Solution 

int search(int arr[], int num, int x){
    int low = 0; 
    int high = num-1; 
    while(low<= high){
        int mid = (low+high)/2; 
        if(arr[mid] == x) return mid;

        // to check the left half is sorted or not
        if(arr[low]< arr[mid]){
            if(arr[low]<= x && x< arr[mid]){
                high = mid-1; 
            }
            else{
                low = mid+1; 
            }
        }
        else{
            if(arr[mid]< x && x<= arr[high]){
                low = mid+1; 
            }
            else{
                high = mid-1; 
            }
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
    int x; 
    cin >> x; 
    cout << search(arr, num, x); 
}