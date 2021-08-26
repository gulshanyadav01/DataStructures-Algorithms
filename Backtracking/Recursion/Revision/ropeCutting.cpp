/* 
author: gulshan yadav
date: 26-April-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxPiece(int num, int a , int b, int c ){
    if( num == 0){
        return 0; 
    }
    if( num < 0) return -1; 

    int res = max(maxPiece(num - a, a, b, c ), maxPiece(num- b, a , b,  c)); 
    int final = max(res, maxPiece(num-c, a, b, c )); 
    if(final  == -1 ) return -1;
    return final+1; 
}

int main(){
    int num, a, b, c; 
    cin >> num >> a >> b >>c; 
    cout << maxPiece(num, a, b, c ); 
    return 0; 
}