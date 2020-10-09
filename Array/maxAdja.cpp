/* 
author: *gulshan yadav*
date: 09-oct-2020
*/
#include<iostream>
using namespace std;
void maxAdja(int arr[], int num){
    for(int i= 1; i< num; i++){
        if(i == 0){
            if(arr[i] >= arr[i+1]){
                cout << arr[i] << " ";
            }
        }
        
        else {
            if(arr[i-1] <= arr[i]){
                cout << arr[i] <<" ";

            }
        }
    }
}
int main(){

     int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    maxAdja(arr, num);
    return 0;

}