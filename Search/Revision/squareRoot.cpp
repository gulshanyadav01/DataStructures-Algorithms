/* 
author: "gulshan yadav"
date: 24-NOV-2020
*/
#include<iostream>
using namespace std;


int squareRoot(int x){ 
    int low = 1; 
    int high = x; 
    int ans = -1;
    while(low<= high){
        int mid = (low+high)/2; 
        int sqmid = mid * mid; 
        if(sqmid == x){
            return mid; 
        }
        else if( sqmid > x){
            high = mid -1; 
        }
        else {
            low = mid +1; 
            ans = mid;
        }
    }
    return ans;
}
int main(){
    int x; 
    cin >> x; 
    cout << squareRoot(x); 
    return 0; 
}