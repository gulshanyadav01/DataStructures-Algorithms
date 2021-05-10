/* 
author: gulshan yadav
date: 10-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int num){
    int i = 1, fre = 1; 
    while(i< num){
        while(i< num && arr[i] == arr[i-1]){
            fre++; 
            i++; 
        }
        cout << arr[i-1] << " " << fre << endl;
        i++; 
        fre = 1; 

        if(num == 1 || arr[num-1] != arr[num-2]){
        cout << arr[num-1] << " " << fre << endl;
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
    freq(arr, num); 
    return 0; 
}