/* 
author: *gulshan yadav*
date: 08-oct-2020
*/
#include<iostream>
using namespace std;
// majority of elements 
int majorElem(int arr[], int num){
    for(int i= 0; i< num; i++){
        int count = 0;
        for(int j= 0; j< num; j++){
            if(arr[i] == arr[j]){
                count++;
            }
            if(count > num/2){
                return i;
            }
        }
    }
    return -1;
}

int main(){
     int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    cout << majorElem(arr, num);
    return 0;
}