/*
author : gulshan yadav
date : 19-NOV-2020
*/
// this is the naive approach 
// time complexity of this appraoch is Q(N^2); 

int circularSum(int arr[], int num){
    int res = arr[0];


    for(int i = 0; i< num;  i++){
        int curr_sum = arr[i]; 
        int curr_max = arr[i]; 
        for(int j = 1; j< num; j++){
            int index = (i+j) % num; 
            curr_sum  += arr[index]; 
            curr_max = max(curr_max, curr_sum); 
        }
        res = max(res, curr_max); 
    }
    return res; 
}