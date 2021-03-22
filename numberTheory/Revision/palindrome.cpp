/* 
author: gulshan yadav
date: 22-march-2021
*/

#include<iostream>
using namespace std; 

bool palindrome(int x){
    int temp = 0; 
    int rem = 0; 
    int pal = x; 
    while(x> 0){
        rem = x % 10; 
        temp = temp * 10 + rem; 
        x /= 10; 

    }

    if(temp == pal){
        return true; 
    }
    else{
        return false;
    }
}
int main(){
    int x; 
    cin>> x;
    int k = palindrome(x); 
    if(k==1) cout << "yes"<<"\n"; 
    else cout << "no";
    return 0;
}