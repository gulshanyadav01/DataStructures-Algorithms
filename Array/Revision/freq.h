void freq(int arr[], int num){
    for(int i = 0; i< num;){
        int count =0; 
        for(int j = 0; j< num; j++){
            if(arr[i] == arr[j]) count++; 
        }
        
        cout << arr[i] <<":" << count << endl;
        i = count + i; 
    }
    
}