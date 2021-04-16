/* 
author: gulshan yadav
date: 16-April-2021
*/
#include<iostream>
using namespace std;

int countSetBit(int num){
    int res = 0; 
    while(num > 0){
        if(num % 2 == 1){
            res++; 
        }
        num /= 2; 

    }
    return res; 
}

// efficient solution is Brian Kerningam's Algorithm

int countBitSet2(int num){
    int res = 0; 
    while(num > 0){
        num = num & (num-1); 
        res++; 
    }
    return res; 
}


int main(){
    int num; 
    cin >> num; 
    // cout << countSetBit(num);
    cout << countBitSet2(num); 
    return 0; 
    
}