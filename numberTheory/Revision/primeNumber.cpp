/* 
author: gulshan yadav
date: 12-April-2021
*/

#include<iostream>
using namespace std; 

int  primeNumber(int num){
    if(num == 1){
        return false; 
    }

    for(int i = 2; i< num; i++){
        if(num % i == 0 ){
            return false; 
        }

    }
    return true; 
}

// efficient approach 

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


// more efficient solution 

int isPrimeM(int num){
    if(num == 1) return false; 
    if( num == 2 || num == 3) return true; 
    if( num % 2 == 0 || num % 3 == 0 ) return false; 
    for(int i = 5; i*i <= num; i = i+6){
        if(num % i == 0) return false; 
    }
    return true; 
}
int main(){
    int num; 
    cin>> num; 
    // cout << primeNumber(num); 
    // cout << isPrime(num);
    cout << isPrimeM(num); 
    return 0; 
}