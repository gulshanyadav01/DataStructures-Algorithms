/* 
author: gulshan yadav
date: 12-April-2021
*/

#include<iostream>
using namespace std; 

int lcm(int a, int b){
    int res = max(a, b); 
    while(true){
        if( res % a == 0 && res % b == 0){
            return res; 
        }
        else{
            res++; 
        }

    }
    return res; 
}


int main(){
int a,b; 
cin>> a >>b;
cout << lcm(a, b); 
return 0;
}