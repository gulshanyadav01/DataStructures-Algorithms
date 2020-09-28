#include<iostream>
using namespace std;
int main(){
    int a,b;
    unsigned int c = 1;
    cin>> a>> b;
    cout<< (a & b) << endl;// bitwise and 
    cout<< (a | b) << endl;// bitwise or 
    cout<< (a ^ b) << endl;// bitwise xor
    cout<< (3 << 2 ) <<endl; // left shift operator 3 is shift by 2 mean multiply (x * 2^y) and y is how much shifting need to be done .
    cout<< ( 33 >> 2 ) <<endl; // right shift operator 
    cout<< (~c) <<endl;
    
    return 0;
}