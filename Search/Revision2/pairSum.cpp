/* 
author: gulshan yadav
date: 17-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution would be two loop arr[i]+ arr[j] == sum; 
// time is Q(N^2);

// efficient solution 
// but the condition is 
bool  pairSum(int arr[], int num, int sum){
    sort(arr, arr+num); 
    int low = 0; 
    int high = num-1; 
    while(low< high){
        if(arr[low]+arr[high] == sum){
            return true; 
        }
       else  if(arr[low]+arr[high]< sum ){
            low++;
        }
       else  if(arr[low]+arr[high] > sum){
            high--;
        }
    }
    return false;
}

int main(){
    int num; 
    cin >> num; 
    int *arr = new int[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    int sum; 
    cin >> sum; 
    cout << pairSum(arr, num, sum); 
    return 0; 
}