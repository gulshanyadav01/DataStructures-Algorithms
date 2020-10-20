/* 
author: *gulshan yadav*
date: 20-oct-2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateBy90(int **arr, int n){
    int temp [n][n];
    for(int i =0; i< n; i++){
        for(int j = 0; j< n; j++){
            temp[n-j-1][i] = arr[i][j];
        }
    }

    for(int i =0; i< n; i++){
        for(int j= 0; j< n; j++){
            cout << temp[i][j]<< " ";
        }
        cout << endl;
    }

}

int main(){
    int n; 
    cin >> n; 
    int **arr; 
    arr = new int *[n];
    for(int i = 0; i< n; i++){
        arr[i] = new int [n];
        for(int j = 0; j< n; j++){
            cin >> arr[i][j];
        }
    }
    rotateBy90(arr, n);
    return 0;
}