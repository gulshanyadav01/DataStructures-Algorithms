/* 
author: gulshan yadav
date: 04-May-2021
*/
#include<iostream>
using namespace std;

int maxDiff(int arr[], int num){
    int res = arr[1] - arr[0];
    int minValue =  arr[0]; 
    for(int i = 1; i< num; i++){
        res = max(res, arr[i]-minValue);
        minValue = min(arr[i], minValue); 
    }
    return res;
}

// time is Q(N*N); 

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << maxDiff(arr, num);
    return 0; 
}