/* 
author: *gulshan yadav*
date: 20-oct-2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// print the spiral Traversal of Matrix 
//

void printSpiral(vector<vector<int>> &arr,int m, int n){
    int top= 0, left = 0, right = n-1,  bottom = m-1;
    while(top<= bottom  && left<= right){
        for(int i = left; i<= right; i++){
            cout << arr[top][i]<<" ";
        }
        top++;
        
        
        for(int i = top; i<= bottom; i++){
            cout << arr[i][right]<< " ";
        }
        right--;
        
        if(top<= bottom){
            for(int i= right; i>= left; i--){
                cout << arr[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<= right){
            for(int i = bottom; i>= top; i--){
                cout << arr[i][left] << " ";

            }
            left--;
        }
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

    printSpiral(arr, m, n);
    return 0;


}