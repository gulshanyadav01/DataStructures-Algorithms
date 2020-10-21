/* 
author: *gulshan yadav*
date: 16-oct-2020
*/
#include<iostream>
#include<algorithm>
using namespace std;

// this is naive approach time complexity of this method is Q(n^2);

void intersectionOfTwoArray(int arr1[],int arr2[], int num1, int num2){
    for(int i= 0; i< num1; i++){
        if(i> 0 && arr1[i-1] == arr1[i]){
            continue;
        }
        for(int j= 0; j<  num2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i]<<" ";
            }
        }
    }
}

// efficient solution 

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
    intersectionOfTwoArray(arr1, arr2, num1, num2);
    return 0;
}