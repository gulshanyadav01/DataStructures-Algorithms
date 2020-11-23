/*
author : gulshan yadav
date : 23-NOV-2020
*/

#include<iostream>
using namespace std;

#define d 256

void countDinstintElem(int arr[], int num, int k ){
    int count[d] = {0};  
    for(int i =0; i< num-k+1; i++){

        for(int j =0; j< k; j++){
            count[arr[i+j]]++;
        }
        for(int s = 0; s< d; k++){
            if(count[s]>= 1){
                cout << s << " "; 
            }
        }
    }

}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i]; 
    }
    int k ;
    cin >> k; 
    countDinstintElem(arr, num, k); 
    return 0;
}