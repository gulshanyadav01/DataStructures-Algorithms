/* 
author: gulshan yadav
date: 27-April-2021
*/
#include<iostream>
using namespace std;

int largestNum(int arr[], int num){
    int max = arr[0]; 
    for(int i = 0; i< num; i++){
        if(arr[i]> max){
            max = arr[i]; 
        }
    }
    return max; 
}
int main(){
    int num; 
    cin >> num; 
    int *arr = new int[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << largestNum(arr, num); 
    return 0; 
}