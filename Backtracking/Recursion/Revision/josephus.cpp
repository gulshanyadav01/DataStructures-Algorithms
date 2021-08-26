/* 
author: gulshan yadav
date: 27-April-2021
*/

#include<iostream>
using namespace std;

int josephus(int num , int k ){
    if(num == 1) return 0; 
    else{
        return (josephus(num-1,  k) + k ) % num; 
    }
}

int main(){
    int num, k; 
    cin >> num >> k; 
    cout << josephus( num, k ); 
    return 0; 
}