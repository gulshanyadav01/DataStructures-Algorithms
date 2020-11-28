/* 
author: "gulshan yadav"
date: 27-NOV-2020
*/
 
// this is by creating the whole array

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


// this approach is by creating two aux array 
// and then copy into them 
void mergeFunction2(int arr[], int num, int low, int mid, int high){
    int num1 = mid - low + 1; 
    int num2 = high - mid;
    int arr1[num1]; 
    int arr2[num2]; 
    // make the left array
    for(int i = 0; i< num1; i++){
        arr1[i] = arr[low + i]; 

    }

    // make the right array
    for(int j = 0; j< num2; j++){
        arr2[j] = arr[mid+1+j]; 

    }
    int i = 0; int j = 0; int k = low; 
    while(i< num1 && j< num2){
        if(arr1[i]<= arr2[j]){
            arr[k++] = arr1[i++]; 
        }
        else {
            arr[k++] = arr2[j++]; 
        }
    }
    while(i< num1){
        arr[k++] = arr1[i++]; 
    }
    while(j< num2){
        arr[k++] = arr2[j++]; 
    }

}
void merge(int arr[], int num){
    // mergeFunction(arr, num, 0, 8, 3); 
    mergeFunction2(arr, num, 0,3, 8 ); 

}