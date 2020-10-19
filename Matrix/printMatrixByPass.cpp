/* 
author: *gulshan yadav*
date: 19-oct-2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printMatrixByPass(int **arr, int m, int n){
    for(int i = 0; i< m; i++){
        for(int j= 0; j< n; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}

int main(){
    int m, n; 
    cin >> m >> n; 
    int **arr; 
    arr = new int *[m];
    for(int i= 0; i< m; i++){
        arr[i] = new int [n];
        for(int j = 0; j< n; j++){
            cin >> arr[i][j]; 
        }
 
    }
    printMatrixByPass(arr, m, n);
    return 0;
}