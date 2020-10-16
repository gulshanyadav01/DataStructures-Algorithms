/* 
author: *gulshan yadav*
date: 16-oct-2020
*/
#include<iostream>
#include<algorithm>
using namespace std;

// naive approach
void unionOfTwoArray(int arr1[],int arr2[], int num1, int num2){
    int arr3[num1+ num2];
    int i = 0;
    for(; i< num1; i++){
        arr3[i] = arr1[i];
    }
    for(int j = 0; j< num2; i++, j++){
        arr3[i] = arr2[j];
    }
    // sor the array 3
    sort(arr3, arr3 + num1 + num2);
    cout << arr3[0]<< " "; 
    for(int k= 1; k < num1 + num2; k++){
        
        if(arr3[k] != arr3[k-1] ){
            cout << arr3[k] <<" ";
        }
    }
}


int main(){
    int num1,num2 ;
    cin >> num1 >> num2;
    int arr1[num1];
    int arr2[num2];
    for(int i= 0; i< num1; i++){
        cin>> arr1[i];
    }
    for(int i=0; i<num2; i++){
        cin >> arr2[i];
    }
    unionOfTwoArray(arr1, arr2, num1, num2);
    return 0;
}