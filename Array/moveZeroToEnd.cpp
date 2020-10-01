#include<iostream>
using namespace std;
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
    movesZeroToEnd(arr, num);


}