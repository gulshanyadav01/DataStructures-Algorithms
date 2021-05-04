/* 
author: gulshan yadav
date: 04-May-2021
*/
#include<iostream>
using namespace std;

void reverseArray(int arr[], int num){
    int low = 0; 
    int high = num-1; 
    while(low< high){
        int temp = arr[low]; 
        arr[low] = arr[high]; 
        arr[high] = temp;
        low++; 
        high--; 
    }

    for(int i = 0; i< num; i++){
        cout << arr[i]<< " "; 
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    reverseArray(arr, num); 
    return 0; 
}