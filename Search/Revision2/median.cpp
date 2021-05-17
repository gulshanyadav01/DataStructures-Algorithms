/* 
author: gulshan yadav
date: 17-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int   median(int arr1[], int arr2[], int num1, int num2){
    int temp[num1+ num2]; 
    int j = 0; 
    for(int i = 0; i< num1; i++, j++){
        temp[j] = arr1[i];
    }
    for(int i = 0; i< num2; i++, j++){
        temp[j] = arr2[i];
    }
    // sort the array 
    sort(temp, temp+(num1+num2)); 
    int k = (num1+num2); 

    if(k % 2 != 0){
        return (temp[k/2]);
    }
    else{
        return ((temp[(k)/2] + temp[k/2 -1])/2);  
    }

}

// more efficient solution 

double getMedian(int arr1[], int arr2[], int num1, int num2){
    int begin = 0; 
    int end = num1; 
    while(begin<= end){
        int i1 = (begin+end)/2; 
        int i2= ((num1+num2+1)/2)-i1;
        int min1 = (i1 == num1)? INT_MAX: arr1[i1]; 
        int max1 = (i1 == 0)? INT_MIN: arr1[i1-1]; 
        int min2 = (i2 == num2)? INT_MAX: arr2[i2]; 
        int max2 = (i2 == 0)? INT_MIN: arr2[i2-1];
        if(max1<= min2 && max2<= min1){
            if((num1+num2) % 2 == 0)
            return ((double) (max(max1, max2)+ min(min1, min2))/2 ); 
            else{
            return ((double) max(max1, max2));
        }

        }
        else if(max1> min2) end = i1-1; 
        else{
            begin = i1+1; 
        }
        
    }

}

int main(){
    int num1, num2; 
    cin >> num1 >> num2;
    int arr1[num1]; 
    int arr2[num2]; 
    for(int i = 0; i< num1; i++){
        cin >> arr1[i]; 
    }
    for(int i = 0; i< num2;i++){
        cin >> arr2[i]; 
    }
    // cout << median (arr1, arr2, num1, num2); 
    cout << getMedian(arr1, arr2, num1, num2); 
    return 0; 
}