/* 
author: gulshan yadav
date: 2-April-2021
*/
#include<iostream>
using namespace std; 

int deletion(int arr[], int num , int ele){
    int i; 
    for(i = 0; i< num; i++){
        if(arr[i] == ele ) break;
    }
    if( i == num) return num; 
    for(int j = i; j< num; j++){
        arr[j] = arr[j+1]; 
    }
    for(int i = 0; i< num-1; i++){
        cout << arr[i] <<" "; 
    }
    return num-1; 
}

int main(){
    int num; 
    cin >>  num; 
    int *arr = new int[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << deletion(arr, num, 10 )<<endl;
    return 0; 
}

