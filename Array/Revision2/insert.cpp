/* 
author: gulshan yadav
date: 27-April-2021
*/
#include<iostream>
using namespace std;

int insert(int arr[], int num, int cap, int pos, int ele){
    if(num == cap){
        return num;
    }
    int ind = pos -1; 
    for(int i = num-1; i>= ind; i--){
        arr[i+1] = arr[i]; 
    }
    arr[ind] = ele;
    
    return num + 1; 
}

int main(){
    int num; 
    cin >> num; 
    int *arr = new int[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    cout << insert(arr, num, 6, 2, 70); 
    return 0; 
}