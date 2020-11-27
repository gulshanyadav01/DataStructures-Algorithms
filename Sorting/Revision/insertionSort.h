
void insertionSort(int arr[], int num){

    for(int i = 1; i< num; i++){
        int key = arr[0]; 
        int j = i-1; 
        while(j>= 0 && arr[j] > key){
            arr[j+1]  = arr[j]; 
            j--; 
        }
        arr[j+1] = key; 
    }
}