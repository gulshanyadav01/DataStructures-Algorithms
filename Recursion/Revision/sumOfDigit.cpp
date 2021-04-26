/* 
author: gulshan yadav
date: 26-April-2021
*/
#include<iostream>
using namespace std;

int sumOfDigit(int num  ){
    if( num == 0){
        return 0; 
    }
    return (num % 10) + sumOfDigit( num / 10 ); 
}

int main(){
    int num; 
    cin >> num; 
    cout << sumOfDigit( num ); 
    return 0; 
}