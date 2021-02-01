/* 
author: *gulshan yadav*
date: 19-oct-2020
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
int choclateDistProb(int arr[], int num, int child){
    sort(arr, arr+num);
    int res= arr[child-1]- arr[0];
    for(int i= 1; i+child-1< num; i++){
        res = min(arr[i + child - 1]-arr[i], res);
    }
    return res;

}
int main(){
    int num,child; 
    cin >> num >> child;
    int arr[num];
    for(int i= 0; i< num; i++){
        cin >> arr[i];

    }
    cout << choclateDistProb(arr, num , child);
    return 0;
}