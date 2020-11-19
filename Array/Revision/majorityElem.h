/*
author : gulshan yadav
date : 19-NOV-2020
*/

// this is the naive solution 
// time complexity of this solution is Q(N^2)
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

// efficient solution 

int majorityElem2(int arr[], int num){
    int res = 0; 
    int count = 1; 
    for(int i = 1; i< num; i++){
        if(arr[res] == arr[i])
        {
            count++; 
        }
        else {
            count --; 
        }
        if(count == 0){
            res = i; 
            count =1 ; 
        }
    }
    count = 0; 
    for(int i = 0; i< num; i++){
        if(arr[res] == arr[i]){
            count++; 
           
        }       
    }
    
    if(count < (num/2)){
                return -1;
        }
    return res;
}