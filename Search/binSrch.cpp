/* 
author: *gulshan yadav*
date: 11-oct-2020
*/
#include<iostream>
using namespace std;
// this is iterative solution 
int binSrchIter(int arr[], int num, int x){
    int low =0; 
    int high = num-1;
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid] == x ){
            return mid;
        }
        if(arr[mid]< x){
            low = mid+ 1; 
        }
        if(arr[mid]> x){
            high = mid -1 ;
        }

    }
    return -1;

}
// this is recursive solution 
int binSrchRec(int arr[], int num,int low, int high,int x ){

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == x ){
            return mid;
        }
        if(arr[mid] < x){
            return binSrchRec(arr, num, mid+1, high, x);
        }
        if(arr[mid] > x){
            return binSrchRec(arr, num, low, mid-1, x);
        }
    }
    return -1;
    
}
int main(){
    int num;
    cin>> num;
    int x ; 
    cin >> x; 
    int arr[num];
    for(int i= 0; i< num; i++){
        cin >> arr[i];
    }
    // cout <<binSrchIter(arr, num, x);
    cout <<binSrchRec(arr, num, 0, num-1, x );
    return 0;
}
