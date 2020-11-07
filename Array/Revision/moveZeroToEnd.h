using namespace std;

void moveZeroToEnd(int arr[], int num){
    int j =0;
    int count = 0;
    for(int i =0; i< num; i++){
        if(arr[i] == 0){
            count++; 
        }
    }
    for(int i =0; i< num; i++){
        if(arr[i] != 0){
            arr[j] = arr[i]; 
           j++; 
        }
    }
    int k = j; 
    for(; j< k+count; j++ ){
        arr[j] = 0; 
    }

    for(int i =0; i< num; i++){
        cout << arr[i] <<" ";
    }
}