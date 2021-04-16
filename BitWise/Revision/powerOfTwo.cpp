/* 
author: gulshan yadav
date: 16-April-2021
*/
#include<iostream>
using namespace std;

bool  powerOfTwo(int num){
    while(num != 1) {
        if(num % 2 != 0 ) return false; 
        num /= 2; 
    }
    return true; 
}

// efficient method  

bool isPowerTwo(int num){
    if (num ==0 ) return false; 
    return ((num & (num-1)) == 0); 
}

int main(){
    int num; 
    cin >> num; 
    // cout << powerOfTwo(num);
    cout << isPowerTwo(num); 
    return 0; 

}