/* 
author: gulshan yadav
date: 04-May-2021
*/
#include<iostream>
using namespace std;


// the array should be in sorted order 
int  removeDuplicate(int arr[], int num){
    // int duplicate = -1; 
    int j = 1; 
    for(int i = 0; i< num; i++){
        if(arr[i] != arr[j-1]){
            arr[j] = arr[i]; 
            j++; 
        }
    }
    return j;
}

int main(){
    int num; 
    cin>> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];      
    }
    cout << removeDuplicate(arr, num); 
    return 0; 
}