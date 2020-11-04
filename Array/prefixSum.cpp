/* 
author: *gulshan yadav*
date: 09-oct-2020
*/
#include<iostream>
using namespace std;
// if we have multiple queries then it is time consuming process let suppose 
// if we have n queries n*(n-> this n is compute the sum);
// so the better idea to solve the problem is to make the prefix sum array

int prefixSum(int arr[],int num){
    int prefixSum[num];
    prefixSum[0] = arr[0];
    for(int i = 1; i< num; i++ ){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

}
// prefix sum technique
int rangeSum(int arr[], int num, int l, int r){
    int sum= 0;
    for(int i= l; i<= r; i++){

        sum += arr[i];
        
    }
    return sum;
}
int main(){

    int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    cout << rangeSum(arr, num , 0, 2);
    return 0;

}