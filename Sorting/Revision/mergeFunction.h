/* 
author: "gulshan yadav"
date: 27-NOV-2020
*/
 

void mergeFunction(int arr[], int num, int low, int high, int mid){
    int arr2[num]; 
    int k = 0; 
    int i = low;
    int j = mid+1; 
    while(i<= mid && j<= high){
        if(arr[i] >= arr[j]){
            arr2[k++] = arr[j]; 
            j++; 
        }
        else if (arr[i] <= arr[j]){
            arr2[k++] = arr[i]; 
            i++; 
        }
        
    }
    while(i<= mid){
        arr2[k++] = arr[i]; 
        i++; 
    }
    while (j<= high){
        arr2[k++] = arr[j];
        j++; 

    }

    for(int i = 0; i< num; i++){
        arr[i] = arr2[i]; 
    }

}

void merge(int arr[], int num){
    mergeFunction(arr, num, 0, 8, 3); 

}