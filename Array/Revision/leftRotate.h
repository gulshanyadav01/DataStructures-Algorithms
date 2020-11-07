
using namespace std;
void leftRotate(int arr[], int num){
    int temp = arr[0];
    int i =0;  
    for(; i< num-1; i++){
        arr[i] = arr[i+1]; 
    }
    arr[i] = temp; 

    // for(int j =0; j< num; j++){
    //     cout << arr[j] << " "; 
    // }

}