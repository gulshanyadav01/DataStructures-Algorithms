/* 
author: gulshan yadav
date: 12-April-2021
*/

#include<iostream>
#include<vector>
using namespace std;

void sieve(int num){
    vector<bool> isPrime(num+1, true); 
    for(int i = 2; i*i <= num; i++){
        if(isPrime[i]){
            for(int j = 2*i; j<= num; j = j+i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 2; i<= num; i++){
        if(isPrime[i]){
            cout << i << " "; 
        }
    }
}
int main(){
    int num; 
    cin >> num; 
    sieve(num); 
    return 0
}