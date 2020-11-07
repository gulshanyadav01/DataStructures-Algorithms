int maxDiff(int arr[], int num){
    int res = arr[1] - arr[0]; 
    int minVal = arr[0]; 
    for(int i = 1; i< num; i++){
        res = max(res, arr[i] - minVal); 
        minVal = min(arr[i], minVal); 
    }
    return res;
}