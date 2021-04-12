/* 
author: gulshan yadav
date: 12-April-2021
*/

#include<iostream>
using namespace std;
int isPrime(int num){
    if(num == 1){
        return false; 
    }
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            return false;
        }

    }
    return true; 
}


void allPrimeNumber(int num){
    for(int i = 2; i<= num; i++){
        if(isPrime(i)) cout << i << " "; 
    }
    
}

int main(){
    int num; 
    cin >> num; 
    allPrimeNumber(num); 
    return 0; 
}