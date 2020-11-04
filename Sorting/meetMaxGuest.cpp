/* 
author: *gulshan yadav*
date: 19-oct-2020
*/
#include<iostream>
#include<algorithm>
using namespace std;

int meetMaxGuest(int arr1[], int arr2[], int num){
    // sort the array
    sort(arr1, arr1 + num);
    sort(arr2, arr2 + num);
    int curr = 1; 
    int res =1;
    int i = 1; 
    int j= 0; 
    while(i< num && j< num){
        if(arr1[i]<= arr2[j]) {curr++; i++;}
        else  curr--; j++;
        res = max(res, curr);

    }
    return res;
}
int main(){
    int num;
    cin >> num; 
    int arr1[num];
    int arr2[num];
    
    for(int i= 0; i< num; i++){
        cin>> arr1[i];
    }
    for(int i= 0; i< num; i++){
        cin >> arr2[i];
    }
    cout << meetMaxGuest(arr1, arr2, num);
    return 0;
}