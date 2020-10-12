/* 
author: *gulshan yadav*
date: 11-oct-2020
*/
#include<iostream>
using namespace std;
// naive solution 
int 

// this is efficient solution time complexity is Q(logn);
int sqroot(int x){
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
    cout << sqroot(x);
    return 0;
}