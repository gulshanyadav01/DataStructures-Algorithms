/* 
author: *gulshan yadav*
date: 11-oct-2020
*/
#include<iostream>
using namespace std;

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
int main(){
    int num;
    cin>> num;
    int x ; 
    cin >> x; 
    int arr[num];
    for(int i= 0; i< num; i++){
        cin >> arr[i];
    }
    cout <<binSrchIter(arr, num, x);
    return 0;
}
