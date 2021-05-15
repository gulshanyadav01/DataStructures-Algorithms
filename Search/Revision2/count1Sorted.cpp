/* 
author: gulshan yadav
date: 15-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// find the first occurence 
int firstOccurence(int arr[], int num, int low, int high, int key){
    if(low> high) return -1; 
    int mid = (low+high)/2; 
    if(arr[mid] > key){
        return firstOccurence(arr, num, low, mid-1, key); 
    }
    else if(arr[mid] < key){
        return firstOccurence(arr, num, mid+1, high, key );
    }
    else{
        if(mid == 0 || arr[mid-1] != arr[mid]) return mid;
        else{
            return firstOccurence( arr, num, low, mid-1, key); 
        }
    }
}
int count1(int arr[], int num){
    int first = firstOccurence(arr, num, 0, num-1, 1); 
    if( first == -1){
        return 0; 
    }
    else{
        return num- first; 
    }

}
int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << count1(arr, num); 
    return 0; 
}