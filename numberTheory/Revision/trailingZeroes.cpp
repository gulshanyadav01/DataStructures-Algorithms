/* 
author: gulshan yadav
date: 22-march-2021
*/

#include<iostream>
using namespace std; 

int countTrailingZeroes(int num){
    int res = 0; 
    for(int i = 5; i<= num; i *= 5){
        res  += num/i; 

    }
    return res; 
}

int main(){
    int num; 
    cin>>num; 
    cout << countTrailingZeroes(num); 
    return 0; 
}