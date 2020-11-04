/* 
author: *gulshan yadav*
date: 16-oct-2020
*/
#include<iostream>
#include<algorithm>
using namespace std;
// this take Q(n^2 ) time 
int  inversionArray(int arr[], int num){
    int count= 0;
    for(int i= 0; i< num-1; i++){
        for(int j = i+1; j< num;  j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int num;
    cin >> num;
    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }

    cout << inversionArray(arr, num);
    return 0;
}