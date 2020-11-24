/* 
author: "gulshan yadav"
date: 24-NOV-2020
*/
#include<iostream>
using namespace std;

// first occurence 
int firstOccur(int arr[], int num, int low, int high, int key){
    if(low> high){
        return -1; 
    }
    int mid = (low+high)/2; 
    if(arr[mid] < key){
        return firstOccur(arr, num, mid+1, high, key);  
    }
    else if (arr[mid] > key){
        return firstOccur(arr, num, low, mid-1, key); 
    }
    else {
        if(mid == 0 || arr[mid] != arr[mid-1]){
            return mid; 
        }
        else{
            return firstOccur(arr, num, low, mid-1, key); 
        }
    }
}

int count1(int arr[], int num){
    int first = firstOccur(arr, num, 0, num-1, 1); 
    return num- first; 

    
}


int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i]; 
    }
 
    cout << count1(arr, num);
    return 0;  
}