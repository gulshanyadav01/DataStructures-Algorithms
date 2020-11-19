/*
author : gulshan yadav
date : 19-NOV-2020
*/

int longestEvenOdd(int arr[], int num){
    int res =1; 
    int count = 1; 
    for(int i = 0; i< num; i++){
        if((arr[i]% 2 == 0 && arr[i+1] %2 !=0) || (arr[i]% 2 != 0 && arr[i+1] %2 ==0)){
            count++; 
            res = max(count, res); 
        }
        else {
            count = 1; 
        }
    }
    return res; 
}