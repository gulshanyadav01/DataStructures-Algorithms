/* 
author: gulshan yadav
date: 26-April-2021
*/
#include<iostream>
using namespace std;

void Toh(int num, char a , char b, char c){
    if( num == 1){
        cout << "move disk "<<  num << " from " << a << " to " << c << endl;
        return; 
    }
    Toh(num-1, a, c,  b); 
    cout << "move disk "<< num <<" from "  << a <<" to " << c << endl;
    Toh(num-1, b, a, c); 
}

// tower of hanoi 
// time complexit of this algorithm is Q(2^N)
// because it has recurrence relation of T(n) = 2T(n-1)+1;

void TowerOfHanoi(int num, char a, char b, char c){
    if(num ==1 ){
        cout << "move disk" << num << "from" << a << "to" << c << endl;
        return; 
    }
    TowerOfHanoi(num-1, a, c, b); 
    cout << "move disk" << num << "from" << a << "to" << c << endl;
    TowerOfHanoi(num-1, b, a , c ); 
}

int main(){
    int num; 
    cin >> num; 
    char a, b, c; 
    cin >> a >> b >>c; 
    Toh(num, a, b, c );
    TowerOfHanoi(num, a, b, c);
    TowerOfHanoi(num, a, b, c);
    return 0;
}