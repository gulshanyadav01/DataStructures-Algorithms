/* 
author: gulshan yadav
date: 12-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void  minConsFlip(int arr[], int num){
    for(int i =1; i< num; i++){
        if(arr[i] != arr[i-1]){
            if(arr[i] != arr[0]){
                cout << " from "<< i << " to ";
            }
            else{
                cout << i-1 << endl;
            }
        }
    }
    if(arr[num-1] != arr[0]){
        cout << num-1 << endl;
    }

}
int main(){
    int num;
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    minConsFlip(arr, num);
    return 0; 
}