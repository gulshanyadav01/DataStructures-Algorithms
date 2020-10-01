#include<iostream>
using namespace std;
void  leftRotateByOne(int arr[], int num ){
    int temp = arr[0];
    for(int i = 0; i < num-1; i++){
        arr[i] = arr[i+1];
    }
    arr[num-1] = temp;

    

}
void leftRotateByD(int arr[], int num , int d ){
    for(int i = 0; i < d; i++){
        leftRotateByOne(arr, num );
    }
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }
}
// one more optimise version of this is in question which have time Q(n) and space is Q(1);
void reverseAlgo(int arr[], int low , int high){
    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void rotateByD2(int arr[] , int num , int d ){

    reverseAlgo(arr, 0 , d-1);
    reverseAlgo(arr, d , num -1);
    reverseAlgo(arr, 0, num -1);
    
} 
int main(){
 int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    cout<< " enter the number time to rotate" << endl;
    int d;
    cin >> d; 
    // leftRotateByD(arr, num , d);
    rotateByD2(arr, num , d );

    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }
    return 0;

}