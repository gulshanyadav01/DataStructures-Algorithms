/* 
author: *gulshan yadav*
date: 08-oct-2020
*/
#include<iostream>
using namespace std;
// naive solution 
int maxSumCirArray(int arr[], int num){
    int res= 0;
    for(int i= 0; i< num; i++){
        int sum = 0;
        for(int j= 0; j< num; j++){
            int index = (i+j)% num; 
            sum = sum + arr[index];
            res = max(sum, res);
            
        }
        
    }
    return res;
}

int main(){
     int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    cout << maxSumCirArray(arr, num);
    return 0;
}