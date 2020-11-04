/* 
author: *gulshan yadav*
date: 14-oct-2020
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


    return 0;

}