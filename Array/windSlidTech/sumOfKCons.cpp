/* 
author: *gulshan yadav*
date: 09-oct-2020
*/
#include<iostream>
using namespace std;
int sumOfKCons(int arr[],int num, int k){
    int res= 0;
    for(int i = 0; i+k-1< num; i++){
        int sum = 0;
        for(int j= 0; j< k; j++){
            sum += arr[i+j];
            res = max(res, sum);
        }
    }
    return res;
}
// efficient solution 
int sumOfKCons1(int arr[], int num,int k){
    int curr = 0;
    for(int i= 0; i< k; i++){
        curr += arr[i];
    }
    int maxSum = curr;
    for(int i= k; i< num; i++){
        curr = curr + arr[k] - arr[i-k];
        maxSum = max(curr, maxSum);
    }
    return maxSum;
}
int main(){
    int num, k;
    cin >> num >> k;
    int arr[num ];
    for(int i= 0 ;i< num ;i++){
        cin >> arr[i];
    }
    // cout << sumOfKCons(arr, num, k);
    cout << sumOfKCons1(arr, num, k);
    return 0;

}