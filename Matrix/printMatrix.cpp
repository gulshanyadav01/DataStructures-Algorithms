/* 
author: *gulshan yadav*
date: 19-oct-2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printMatrix(int arr[][2], int m){
    for(int i= 0; i< m; i++){
        for(int j = 0; j< 2; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}
int main(){
    int m = 3; 
    int arr[3][2];
    for(int i= 0; i< m; i++){
        for(int j= 0; j< 2; j++){
            cin >> arr[i][j];
        }
    }
    printMatrix(arr, m);
    return 0;
}