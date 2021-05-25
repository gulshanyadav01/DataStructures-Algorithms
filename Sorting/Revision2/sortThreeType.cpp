/* 
author: gulshan yadav
date: 25-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

// naive is make array of temp then copy 
// time Q(N)
// space Q(N)

// efficient solution would be Dutch National Algorithm

void sortThreeType(int arr[], int num){
    int mid = 0; 
    int low = 0; 
    int high = num-1; 
    while(mid<= high){
        if(arr[mid] == 0){
            int temp  = arr[low];
            arr[low] = arr[mid]; 
            arr[mid] = temp; 
            low++; 
            mid++; 
        }
        else if(arr[mid] == 1){
            mid++; 
        }
        else{
            int temp = arr[high]; 
            arr[high] = arr[mid]; 
            arr[mid] = temp; 
            high--; 
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
    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    cout << "\n"; 

    // segPosHoare(arr, num); 
    sortThreeType(arr, num); 
    for(int i = 0; i< num; i++){
        cout << arr[i]<< " "; 
    }
}