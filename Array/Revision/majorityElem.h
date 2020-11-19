/*
author : gulshan yadav
date : 19-NOV-2020
*/

int majorityElem(int arr[], int num){
    int res = 0; 
    for(int i =0; i< num; i++){
        int count = 0; 
        for(int j = 0; j< num; j++){
            if(arr[i] == arr[j]) count++; 
            if(count >= num/2){
                return i;
            }
            
        }
    }
    return -1; 
}