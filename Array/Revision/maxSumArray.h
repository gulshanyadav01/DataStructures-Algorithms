/*
author : gulshan yadav
date : 18-NOV-2020
*/

int maxSumArray(int arr[], int num){
    int res  = arr[0]; 
    for(int i = 0; i< num; i++){
        int sum = arr[i]; 
        for(int j = i+1; j< num; j++){

            sum += arr[j]; 
        }
        res = max(res, sum); 
    }
    return res; 
}