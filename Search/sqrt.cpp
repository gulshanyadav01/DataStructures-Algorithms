/* 
author: *gulshan yadav*
date: 12-oct-2020
*/
#include<iostream>
using namespace std;
// naive solution time complexity (sqrt(n));
int sqroot1(int x){
    int i = 1;
    while(i*i <= x){
        i++;
    }
    return i-1;
}

// this is efficient solution time complexity is Q(logn);
int sqroot2(int x){
    int low = 1; 
    int high= x; 
     int ans= -1;
    while(low<= high){
        int mid = (low+high)/2;
        int midSq = mid* mid;
       
        if(midSq== x){
            return mid;

        }
        if(midSq > x){
            high = mid -1;
        }
        if(midSq < x){
            low = mid+1;
            ans = mid;
        }
        

    }
    return ans;
}
int main(){
    int x;
    cin>> x; 
    // cout << sqroot2(x);
    cout << sqroot1(x);
    return 0;
}