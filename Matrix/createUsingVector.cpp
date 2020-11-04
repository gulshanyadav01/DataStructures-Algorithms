/* 
author: *gulshan yadav*
date: 19-oct-2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    vector<vector<int>> arr;
    for(int i = 0; i< 3; i++){
        vector<int> v;
        for(int j=0; j< 3; j++){
            v.push_back(10);
        }
        arr.push_back(v);
    }
    // to print the vector
    for(int i = 0; i< arr.size(); i++){
        for(int j= 0; j< arr[i].size(); j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;

    }
    return 0;
}
