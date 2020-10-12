/* 
author: *gulshan yadav*
date: 11-oct-2020
*/
#include<iostream>
using namespace std;

int firstOccur(int arr[],int num, int low, int high,int x){
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid]< x){
            return firstOccur(arr, num, low, mid-1,x);
        }
        if(arr[mid]> x){
            return firstOccur(arr, num,mid+1, high, x );
        }
        else{
            if(arr[mid-1] != arr[mid] || mid == 0){
            return mid;
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
    cout << firstOccur(arr, num, 0, num-1, x);
    return 0;
}