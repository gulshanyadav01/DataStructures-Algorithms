/* 
author: *gulshan yadav*
date: 20-oct-2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// this is the naive solution of problem time complexity of this problem is Q(n^2);
// this is printing only if we have the conversion of full array 
// then we need extra space to hold initial value 
// then the space complexity Q(n)
void printTransposeMatrix(vector<vector<int>> &arr){
    for(int i = 0; i< arr.size(); i++){
        for(int j = 0; j< arr[i].size(); j++){
            cout << arr[j][i]<< " ";
        }
        cout << endl;
    }
}

// efficient solution with no extra space 

void printTranspose(vector<vector<int>> &arr){
    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j< arr[i].size(); j++){
            int temp = arr[i][j]; 
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // print the array 
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
    printTranspose(arr);
    return 0;
}