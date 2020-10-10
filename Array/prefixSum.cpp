/* 
author: *gulshan yadav*
date: 09-oct-2020
*/
#include<iostream>
using namespace std;
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