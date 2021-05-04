/* 
author: gulshan yadav
date: 04-May-2021
*/
#include<iostream>
using namespace std;

void moveAllZero(int arr[], int num){
    for(int i = 0; i< num; i++){
        if(arr[i] == 0){
            for(int j = i+1; j< num; j++){
                if(arr[j] != 0){
                    // swapping between non-zero and zero
                    int temp = arr[i]; 
                    arr[i] = arr[j]; 
                    arr[j] = temp; 
                }
            }
        }
    }
    for(int i = 0; i< num; i++){
        cout << arr[i] <<" ";
    }
}

// efficient solution would be : maintain the count of non-zero element

void moveZero(int arr[], int num){
    int count = 0; 
    for(int i = 0; i< num; i++){
        if(arr[i] != 0){
            int temp = arr[i]; 
            arr[i] = arr[count]; 
            arr[count] = temp;
            count++;
        }
    }
    for(int i =0; i< num; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    // moveAllZero(arr, num);
    moveZero(arr, num); 

    return 0; 
}