/* 
author: "gulshan yadav"
date: 03-DEC-2020

*/
#include<iostream>
using namespace std;

void countingSort(int arr[], int num, int k ){
    
    int count[k]; 
    for(int i = 0; i< k; i++){
        count[i] = 0; 
    }

    // fill the count array 

    for(int i = 0; i<  num; i++){
        count[arr[i]]++; 
    } 

    int index = 0; 
    for(int i = 0; i< k; i++){
        for(int j = 0; j< count[i]; j++){
            arr[index] = i; 
            index++;
        }

    }
    // display the array 

    for(int i =0; i< num; i++){
        cout << arr[i] <<" "; 
    }
    
}


// most efficient solution 

void countingSort2(int arr[], int num, int k ){
    int count[k];
    for(int i =0;i< k; i++){
        count[i] = 0; 

    }
    for(int i =0; i< num; i++){
        count[arr[i]]++; 
    }

    // update the count 
    for(int i = 1; i< k; i++){
        count[i] = count[i- 1] + count[i];
    }

    int output[num];
    for(int i = num-1; i>= 0; i--){
        output[count[arr[i]] -1] = arr[i];
        count[arr[i]]--;

    }
    for(int i =0; i< num; i++){
        arr[i] = output[i];
    }
    for(int i =0; i< num; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int  i = 0; i< num; i++){
        cin >> arr[i];
    }
    int k; 
    cin >>k ;
    countingSort2(arr, num, k); 
    return 0;
}