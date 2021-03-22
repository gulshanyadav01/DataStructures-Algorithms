/* 
author: gulshan yadav
date: 22-march-2021
*/

#include<iostream>
using namespace std; 
int countDigit(int x){
    int count = 0; 
    while(x> 0){
        count++; 
        x /= 10; 
    }
    return count; 
}
int main(){
    int x; 
    cin>>x; 
    cout << countDigit(x);
    return 0; 
    
}