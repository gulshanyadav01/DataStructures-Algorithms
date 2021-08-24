/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 19-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int fibo(int n){
    int fibo[n+1];
    fibo[0] = 0; 
    fibo[1] = 1; 

    for(int i = 2; i<= n; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo[n]; 
}

int main(){
    int n; 
    cin >> n; 

    // cout << fib(n); 
    cout << fibo(n); 
    return 0; 
}