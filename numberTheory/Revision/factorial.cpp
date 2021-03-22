/* 
author: gulshan yadav
date: 22-march-2021
*/

#include<iostream>
using namespace std;

// easy method 

int fact(int x ){
    int fact = 1; 
    for(int i = x; i>=1; i--){
        fact *= i; 
    }
    return fact; 
}


// recursive solution

int factorial(int x ){
    if(x == 1 || x == 0){
        return 1; 
    }
    return factorial(x-1) * x; 

}

int main(){
    int x; 
    cin>>x; 
    // cout << fact(x);
    cout << factorial(x); 
    return 0;
}