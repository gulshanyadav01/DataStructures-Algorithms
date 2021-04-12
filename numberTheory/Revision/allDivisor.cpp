/* 
author: gulshan yadav
date: 12-April-2021
*/

#include<iostream>
using namespace std;

// print all divisor 
void printAllDivisor(int num){
    for(int i = 1; i<= num; i++){
        if( num % i == 0){
            cout << i <<" ";
        }
    }
}

// efficient solution 

void PrintDivisor(int num){
    for(int i = 1; i*i <= num; i++){
        if(num % i == 0 ){
            cout << i << " "; 
            if( i != (num/i)){
                cout << num/i <<" "; 
            }
        }
    }
}

// efficient solution with sorted order 

void printDivisorSorted(int num){
    int i;  
    for(i = 1; i*i <= num; i++){
        if(num % i == 0 )cout << i << " "; 

    }

    for(; i>=1; i--){
        if( num % i == 0) cout << num / i << " "; 
    }

}

int main(){
    int num; 
    cin >> num; 
    // printAllDivisor(num); 
    // PrintDivisor(num); 
    printDivisorSorted(num); 
    return 0; 
}