/* 
author: "gulshan yadav"
date: 25-NOV-2020
*/
#include<iostream>
using namespace std;

// this is the pair sum 

bool pairSum(int arr[], int num, int key, int low , int high){
   
    while(low< high){
        if((arr[low] + arr[high]) == key){
            return true;
        }
        else if (arr[low]+ arr[high]< key){
            low++; 
        }
        else{
            high--; 
        }
    }
    return false;

}
// this is triplet sum 

bool tripletSum(int arr[], int num, int key){

    for(int i = 0; i< num; i++){
        if(pairSum(arr, num, key-arr[i], i+1, num-1)){
            return true;
        }
    }
    return false; 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    int key; 
    cin >> key; 
    // cout << pairSum(arr, num, key, 0, num-1); 
    cout << tripletSum(arr, num , key); 
    return 0; 
}