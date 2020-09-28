#include<iostream>
using namespace std;
void checkKthBitSet(int num , int k ){
    cout << (num & (1<< (k-1)) != 0) ? "yes" : "no";

}
int main(){

    int num, k;
    cin >> num >> k ;
    checkKthBitSet(num , k);

}