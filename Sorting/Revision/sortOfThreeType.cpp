/* 
author: "gulshan yadav"
date: 02-DEC-2020

*/
#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int *temp = a; 
    a = b; 
    b = temp;
}

void sortOfThreeType(int arr[], int low, int high){
    int mid = 0; 
    while(mid<= high){
        switch(arr[mid]){
            case 0:
                swap(arr[low], arr[mid]); 
                low++; 
                mid++; 
                break;
            
            case 1:
                mid++; 
                break;
            
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
            
        }
    }
}

// partition around the given range 

void partitionAroundRange(int arr[], int low, int high){
    int mid = 0; 
    while(low<= high){
        if(arr[mid]< 5){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            continue;
        }
        if(arr[mid]>= 5 && arr[mid]<= 10){
            mid++; 
            continue;
        }
        if(arr[mid]> 10){
            swap(arr[mid], arr[high]);
            high--; 
            continue;
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
    // sortOfThreeType(arr, 0, num-1); 
    partitionAroundRange(arr, 0, num-1); 

    for(int i = 0; i< num; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}