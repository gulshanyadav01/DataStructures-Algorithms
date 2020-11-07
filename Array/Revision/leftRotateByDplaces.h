using namespace std; 
// #include "leftRotate.h"

void leftRotateByD(int arr[], int num){
    cout <<" enter the place to rotate"; 
    int d; 
    cin >> d; 
    for(int i = 0; i< d ; i++){
        leftRotate(arr, num); 

    }
    for(int i =0; i< num; i++){
        cout << arr[i]<< " "; 
    }

}