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

// this is the efficient solution 

int maxSumArray2(int arr[], int num){
    int res = arr[0]; 
     int sum = arr[0]; 
    for(int i = 1; i< num; i++){
       sum = max(sum+ arr[i], arr[i]); 
       res = max(res, sum); 
        
    }
    return res; 
}