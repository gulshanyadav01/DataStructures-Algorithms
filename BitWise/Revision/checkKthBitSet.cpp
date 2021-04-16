/* 
author: gulshan yadav
date: 16-April-2021
*/
#include<iostream>
using namespace std;

int main(){
    int x, k; 
    cin >> x >> k; 
    if(x & (1<<(k-1)) != 0 ){
        cout << "Yes";
    }
    else{
        cout <<"No";
    }

    // second solution is the right shift operator 

    if(x>>(k-1)& 1 == 1 ) cout <<"yes"; 
    else cout <<"No"; 
    return 0; 
}