/* 
author: gulshan yadav
date: 04-May-2021
*/
#include<iostream>
using namespace std;

void leaderArray(int arr[], int num){
    for(int i = 0; i< num; i++){
        bool flag = true; 
        for(int j = i+1; j< num; j++){
            if(arr[j] > arr[i]){
                flag = false; 
                break;
            }
        }
        if(flag){
            cout << arr[i] <<" "; 
        }
    }
}

// efficient solution 

void leader(int arr[], int num){
    int lead = arr[num-1]; 
    cout << lead<<" "; 
    for(int i = num-2; i>= 0; i--){
        if(arr[i]> lead){
            cout << arr[i]<<" " ; 
            lead = arr[i]; 
        }
    }
    
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    // leaderArray(arr, num);
    leader(arr, num); 
    return 0; 
}
