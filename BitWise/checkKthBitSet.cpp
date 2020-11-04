#include<iostream>
using namespace std;
void checkKthBitSet(int num , int k ){
    // cout <<  ? "yes" : "no";
    if(num & (1<<k) != 0) cout<<"yes";
    else cout <<"no";


}
int main(){

    int num, k;
    cin >> num >> k ;
    checkKthBitSet(num , k-1);

}