/* 
author: *gulshan yadav*
date: 20-oct-2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include "transposeMatrix.h"
using namespace std;

// this is naive approach to solve this question 
// it require the space complexity Q(n);
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

// int main(){
//     int n; 
//     cin >> n; 
//     int **arr; 
//     arr = new int *[n];
//     for(int i = 0; i< n; i++){
//         arr[i] = new int [n];
//         for(int j = 0; j< n; j++){
//             cin >> arr[i][j];
//         }
//     }
//     rotateBy90(arr, n);
//     return 0;
// }


// second better appraoch
// first transpose the given matrix 
// then reverse the corresponding value of matrix
void printRotate(vector<vector<int>> &arr){

    // this function given the transported array ;
    printTranspose(arr);

    // let check out 
    for(int i =0; i< arr.size(); i++){
        for(int j = 0; j< arr[i].size(); j++){
            int temp = arr[i][j];
            arr[i][j] = arr[arr.size()-j-1][i];
            arr[arr.size()-j-1][i] =temp;
        }
    }
     for(int i = 0; i< arr.size(); i++){
        for(int j = 0; j< arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

   
}


int main(){
    vector<vector<int>> arr;
    int m,n; 
    cin >> m >> n; 
    for(int i = 0; i< m ; i++){
        vector<int> v; 
        for(int j= 0; j< n; j++){
            int k ;
            cin>>k ;
            v.push_back(k);
        }
        arr.push_back(v);
    }
    // printTransposeMatrix(arr);
    printRotate(arr);
    
    return 0;
}