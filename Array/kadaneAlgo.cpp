/* 
author: *gulshan yadav*
date: 08-oct-2020
*/
#include<iostream>
using namespace std;
int kadaneAlgo(int arr[], int num){
    int res = 0;
    for(int i= 0; i< num; i++){
        res = max(res + arr[i], arr[i]);
    }
    return res;
}
int main(){
  int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i< num ;i++){
        cin >> arr[i];
    }
    cout << kadaneAlgo(arr, num);
    return 0;
}