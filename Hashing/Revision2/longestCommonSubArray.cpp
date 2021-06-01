/* 
author: gulshan yadav
date: 01-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution 
int longestCommon(int arr1[], int arr2[],  int num){
    int res = 0; 
    for(int i =0; i< num; i++){
        int sum1= 0;
        int sum2= 0; 
        for(int j = i; j< num; j++){
            sum1 += arr1[j];
            sum2 += arr2[j];
            if(sum1 == sum2) res = max(res, j-i+1);
        }
    }
    return res; 
}

// efficient solution
// create a temp array 
// temp array hold the difference of arr2[]-arr1[];
int longestSubArrayWithGivenSum(int temp[], int num, int sum){
    int res = 0; 
    int prefixSum =0; 
    unordered_map<int, int> m; 
    for(int i =0; i< num; i++){
        prefixSum += temp[i];
        if(prefixSum == sum) res = i+1; 
        if(m.find(prefixSum) == m.end()){
            m.insert({prefixSum, i});
        }
        if(m.find(prefixSum-sum)!= m.end()){
            res = max(res, i-m[prefixSum-sum]);
        }

    }
    return res; 
}
int longestCommonSubArray(int arr1[], int arr2[], int num){
    int temp[num];
    for(int i =0; i< num; i++){
        temp[i] = arr2[i]-arr1[i];
    }
    return longestSubArrayWithGivenSum(temp, num, 0);

}

int main(){
    int num; 
    cin >> num; 
    int arr1[num], arr2[num];
    for(int i= 0; i< num; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i< num; i++){
        cin >> arr2[i];
    }
    cout << longestCommon(arr1, arr2, num); 
    cout<< endl;
    cout << longestCommonSubArray(arr1, arr2, num); 
    return 0; 
}