/* 
author: "gulshan yadav"
date: 24-NOV-2020
*/
#include<iostream>
using namespace std;

// this is the code for the first occurence of the element
int firstOccur(int arr[], int num, int low, int high, int key){
    if(low > high){
        return -1; 
    }
    int mid = (low+ high)/2; 
    if(arr[mid]< key){
       return  firstOccur(arr, num, mid+1, high,key); 
        
    }
    else if(arr[mid]> key){
        return firstOccur(arr, num , low, mid-1,key); 

    }
    else {
        if(mid == 0 || arr[mid-1] != arr[mid]){
            return mid; 
        }
        else {
            return firstOccur(arr, num, low, mid-1, key); 
        }
    }
}

// this is the code for the last occurence 

int lastOccurence(int arr[], int num, int low, int high, int key){
    if(low> high){
        return  -1; 
    }
    int mid = (low + high)/2; 
    if(arr[mid] < key){
        return lastOccurence(arr, num, mid+1, high, key); 
        
    }
    else if (arr[mid] > key){
        return lastOccurence(arr, num, low, mid-1, key);
    }
    else{
        if(mid == num-1 || arr[mid] != arr[mid+1]){
            return mid; 
        }
        else {
            return lastOccurence(arr, num, mid+1, high, key); 
        }
    }
}

// count of occurence of the element 

int countOccur(int arr[], int num, int low, int high, int key){
    int first = firstOccur(arr, num,low, high, key);
    if(first == -1){
        return 0;
    }
    return (lastOccurence(arr, num, 0, num-1, key)- first +1); 
}


int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i];
    }

    int key; 
    cin >> key; 
    // cout << firstOccur(arr, num, 0, num-1, key); 
    // cout << endl;
    // cout << lastOccurence(arr, num, 0, num-1, key); 
    cout << countOccur(arr, num,0, num-1, key); 
    return 0;
}   