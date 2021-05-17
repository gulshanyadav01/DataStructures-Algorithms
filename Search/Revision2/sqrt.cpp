/* 
author: gulshan yadav
date: 17-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// naive solution 
int sqrt(int x){
    int i = 1; 
    while(i*i<= x){
        i++; 
    }
    return i-1; 
}

// this is efficient solution using binary search
int sqrt1(int x){
    int low = 1, high = x, ans = -1; 
    while(low<= high){
        int mid = (low+high)/2; 
        int msq = mid*mid; 
        if(msq == x){
            return mid; 
        }
        else if( msq > x){
            high = mid-1; 
        }
        else{
            low = mid+1; 
            ans = mid; 
        }
    }
    return ans; 
}
int main(){
    int x; 
    cin >> x; 
    cout << sqrt(x); 
    cout << "\n"; 
    cout << sqrt1(x); 
    return 0; 
}