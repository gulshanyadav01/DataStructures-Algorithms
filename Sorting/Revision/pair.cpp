/* 
author: "gulshan yadav"
date: 02-DEC-2020

*/
#include<iostream>
// #include<pair>
#include<bits/stdc++.h>
// #include<Algorithm>
using namespace std;

int main(){
    vector<pair<int, int>> arr[5];
    for(int i = 0; i< 5; i++){
        int a, b; 
        cin >>a >> b; 
        arr.push_back(make_pair(a, b));
    }
    // print the pair 

    for(auto itr: arr){
        cout << itr.first<<" "; 
    }
}

