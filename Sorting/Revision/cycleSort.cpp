/* 
author: "gulshan yadav"
date: 03-DEC-2020

*/
#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int *temp = a; 
    a =b; 
    b = temp; 
}


void cycleSort(int arr[], int num){
    for(int cs = 0; cs< num-1; cs++){
        int pos = cs; 
        int item  = arr[cs]; 
        for(int i = cs+1; i< num; i++){
            if(arr[i]< item){
                pos++; 
            }
        }
        // swapping 
        swap(arr[pos], item);

        while(pos!= cs){
            pos = cs; 
            for(int i = cs+1; i< num; i++ ){
                if(arr[i]< item){
                    pos++; 
                }

            }
            // swapping 
            swap(arr[pos], item);
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

    cycleSort(arr, num); 
    
    // print the array 

    for(int i = 0; i< num; i++){
        cout << arr[i] << " ";
    }
    return 0;
}