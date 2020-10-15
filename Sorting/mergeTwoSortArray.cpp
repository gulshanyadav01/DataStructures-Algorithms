/* 
author: *gulshan yadav*
date: 14-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// merging of arrays 
// this has time complexity Q(N);
void mergeTwoSortArray(){
    int n = 5, m =5;
    int arr1[n] = { 2, 4, 6, 8, 10 };
    int arr2[m] = {1, 3, 5, 7, 9};
    int arr3[n+m];
    int i= 0; 
    int j= 0; 
    int k= 0;
    while(i< n  && j< m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i];
            i++;
        }
        else{
            arr3[k++] = arr2[j];
            j++;

        }
 
    }
    // i is the name of the scenes
    while(i< n){
        arr3[k++] = arr1[i];
        i++;
    }
    while(j< m){
        arr3[k++] = arr2[j];
        j++;
    }
    for(int p= 0; p< n+m; p++){
        cout << arr3[p] << " ";
    }
}
int main(){
    mergeTwoSortArray();
    return 0;
    return 0;
}