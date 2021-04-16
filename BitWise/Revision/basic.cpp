/* 
author: gulshan yadav
date: 16-April-2021
*/
#include<iostream>
using namespace std;

int main(){
    int x, y; 
    cin >> x >> y; 
    cout << (x&y) <<"\n";
    cout << (x|y) << "\n"; 
    cout << (x ^ y) << "\n"; 
    unsigned s = 1; 
    cout << ~s<<"\n"; 
    return 0; 
}