/* 
author: *gulshan yadav*
date: 20-oct-2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include "transposeMatrix.h"
using namespace std;

class Index {
    public: 
    int a; 
    int b;
};

void searchInMatrix(vector<vector<int>> &arr, int x ){
    Index obj;
    for(int i= 0; i< arr.size(); i++){
        for(int j= 0; j< arr[i].size(); j++){
            if(arr[i][j] == x ){
                obj.a = i; 
                obj.b = j; 
                break;
            }
        }
    }
    cout << obj.a << " " << obj.b << endl;
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
    int x; 
    cin >> x; 
    searchInMatrix(arr, x);
    return 0;


}
    
    
