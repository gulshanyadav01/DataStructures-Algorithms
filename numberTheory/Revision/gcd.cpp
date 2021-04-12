/* 
author: gulshan yadav
date: 22-march-2021
*/

#include<iostream>
using namespace std;

// naive method 

int gcd(int a, int b){
    int res = min(a,b); 
    while(res > 0){
        if(a % res ==0 && b % res == 0  ) break;
        res --; 
    }
    return res; 
    
}

// euclidean method 
int gcdEuc(int a, int b){
    while(a != b){
        if(a> b){
            a = a-b; 
        }
        else{
            b = b-a; 
        }
    }
    return a; 
}

// optimize euclidean algorithm

int gcdE(int a, int b){
    if(b == 0 ){
        return a; 
    }
    else{
        return gcdE(b, a%b); 
    }
}
int main(){
    int a, b; 
    cin >> a >> b; 
    // cout << gcd(a, b);
    // cout << gcdEuc(a, b); 
    cout << gcdE(a, b);
    return 0;
}