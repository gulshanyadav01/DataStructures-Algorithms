/*
author : gulshan yadav
date : 18-NOV-2020
*/

int stockSell(int arr[], int num){
    int res = 0; 
    for(int i = 0; i< num-1; i++){
        if(arr[i] < arr[i+1]) res +=( arr[i+1] - arr[i]);

    }
    return res;
}