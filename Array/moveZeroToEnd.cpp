#include<iostream>
using namespace std;

// naive solution 
void moveZero(int arr[], int num){
    for(int i= 0; i< num; i++){
        if(arr[i] == 0){
            for(int j= i+1; j< num; j++){
                if(arr[j] != 0){
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    break;
                }
            }
        }
    }
    for(int i= 0; i< num; i++){
        cout << arr[i] << " ";
    }
}




void movesZeroToEnd(int arr[], int num ){
    int count = 0;
    for(int i = 0; i < num; i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }
}
int main(){

    int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    // movesZeroToEnd(arr, num);
    moveZero(arr, num);


}