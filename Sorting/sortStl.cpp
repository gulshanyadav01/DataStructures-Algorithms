/* 
author: *gulshan yadav*
date: 12-oct-2020
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=4;
    int arr[n] = {20, 5, 7, 10};
    sort(arr, arr+n);
    
    for(int x: arr){
        cout << x << " ";
    }
    sort(arr, arr+n, greater<int>)
    return 0;

}