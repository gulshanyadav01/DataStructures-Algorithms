/*
author : gulshan yadav
date : 18-NOV-2020
*/

// naive solution 

int maxConsec2(int arr[], int num){
    int res  = 0; 
    for(int i = 0; i< num; i++){
        int curr = 0; 
        for(int j = 0; j< num; j++){
            if(arr[j] == 1){
                curr++; 
            }
            else {
                break;
            }
        }
        res = max(res, curr); 
    }
    return res; 
}


int maxConsec1(int arr[], int num){
    int res = 0; 
    int count = 0; 
    for(int i = 0; i< num; i++){
        
        if(arr[i] == 1){
            count ++;  
            res = max(res, count ); 
        }
        else {
            count = 0; 
        }
    }
    return res; 
}