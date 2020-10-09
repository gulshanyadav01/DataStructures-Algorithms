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
        for(int j= i; j< k; j++){
            sum += arr[j];
            res = max(res, sum);
        }
    }
    return res;
}
int main(){
    int num, k;
    cin >> num >> k;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    cout << sumOfKCons(arr, num, k);
    return 0;

}