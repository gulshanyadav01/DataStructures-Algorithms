/* 
author: gulshan yadav
date: 12-April-2021
*/

#include<iostream>
using namespace std;

// prime factor of a number 

// to check prime number
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


void  primeF(int num){
    for(int i = 2; i<= num; i++){
        if(isPrime(i)){
            int x= i;
            while(num % x == 0){
                cout << i<< " ";
                x = x * i; 
            }
        }

    }
    

}

// efficient method 

void printPrimeFactor(int num){
    if(num <=1 ) return; 

    for(int i = 2; i*i <= num; i++){
        while(num % i == 0){
            cout << i <<" "; 
            num /= i; 

        }
    }
    if(num > 1) cout << num <<" "; 
}

int main(){
    int num; 
    cin >> num; 
    // primeF(num); 
    printPrimeFactor(num);
    return 0; 
}