/* 
author: gulshan yadav
date: 26-April-2021
*/
#include<iostream>
using namespace std;

void fun(int n){
    if(n == 0 ){
        return ; 
    }
    fun(n-1); 
    cout << n << " "; 
    fun(n-1); 
}
int  fun2(int n){
    if(n == 1){
        return 0; 
    }
    return 1+ fun2(n/2); 

}
void fun3(int n){
    if(n == 0 ){
        return; 
    }
    fun3(n/2); 
    cout << n%2 << " "; 
}
int main(){
    int n; 
    cin >> n; 
    // fun(n); 
    // cout << fun2(n); 
     fun3(n); 
    return 0; 
}