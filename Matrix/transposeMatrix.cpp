/* 
author: *gulshan yadav*
date: 20-oct-2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printTransposeMatrix(vector<vector<int>> &arr){
    for(int i = 0; i< arr.size(); i++){
        for(int j = 0; j< arr[i].size(); j++){
            cout << arr[j][i]<< " ";
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
    printTransposeMatrix(arr);
    return 0;
}