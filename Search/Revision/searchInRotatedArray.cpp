/* 
author: "gulshan yadav"
date: 24-NOV-2020
*/
#include<iostream>
using namespace std;

bool searchInRotatedArray(int arr[], int num, int key){
    int low = 0; 
    int high = num -1; 
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid] == key){
            cout << arr[mid]<<""; 
            return mid; 
        } 
        if(arr[low]< arr[mid]){
            // left half is sorted
            if(key>= arr[low] && key< arr[mid]){
                high = mid-1; 
            }
            else {
                low = mid+1; 
            }
        }
        else{
            if(key> arr[mid] && key<= arr[high]){
                low = mid+1; 
            }
            else{
                high = mid-1; 
            }
        }
    }
    return -1; 

}
int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i =0; i< num; i++){
        cin >> arr[i]; 
    }
    int key; 
    cin >>key; 
    cout << searchInRotatedArray(arr, num, key); 
    return 0;
}