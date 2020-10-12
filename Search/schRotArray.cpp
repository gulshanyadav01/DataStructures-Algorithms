/* 
author: *gulshan yadav*
date: 12-oct-2020
*/
#include<iostream>
using namespace std;
int srchRotArray1(int arr[],int num,int x){
    int low = 0;
    int high = num-1;
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[low]< arr[mid]){
            // left half is sorted
            if(x>= arr[low] && x < arr[mid]){
                high= mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(x> arr[mid] && x <= arr[high]){
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int num,x;
    cin>> num >>x ;
    int arr[num];
    for(int i= 0; i< num; i++){
        cin >> arr[i];
    }
    cout << srchRotArray1(arr, num, x);
    return 0;

}