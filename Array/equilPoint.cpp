/* 
author: *gulshan yadav*
date: 10-oct-2020
*/
#include<iostream>
using namespace std;

bool equilPoint(int arr[],int num){
    for(int i =0; i< num; i++){
        int lmax = 0;
        for(int j= 0; j< i; j++){
            lmax += arr[j];
        }
        int rmax = 0;
        for(int k = i+1; k< num; k++){
            rmax += arr[k];
        }
        if(lmax == rmax) return true;
        
    }
    return false;
}

int main(){
    int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    cout << equilPoint(arr, num);
    return 0;
}