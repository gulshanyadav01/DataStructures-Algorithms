/* 
author: *gulshan yadav*
date: 19-oct-2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printBoundary(vector<vector<int>> &arr){

    // to do explicity handle the corner case (please)
    cout << arr.size();
    int row = arr[0].size();
    int col = arr.size()/arr[0].size();
    cout << col<< " ";
    // for(int i = 0; i< row; i++){
    //     cout << arr[i][0]<<" ";
    // }
    // for(int j = col; j< row; j++){
    //     cout << arr[j][col]<<" ";
    // }
    // for(int k = col-2; k >= 0; k--){
    //     cout << arr[row][k]<< " ";
    // }
    // for(int p = row-2; p >= 0; p--){
    //     cout << arr[p][0]<< " ";
    // }

}
int main(){
    vector<vector<int>> arr;
    int row, col; 
    cin >> row >> col;
    for(int i =0 ; i< row; i++){
        vector<int> v; 
        for(int j = 0; j< col; j++){
            int k; 
            cin >> k;
            v.push_back(k);
        }
        arr.push_back(v);
    }
    printBoundary(arr);
    return 0;
}
