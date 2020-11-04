#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// naive solution time is Q(total no. of bits like 32 and 64)
int countBitSet1(int num ){
    int count = 0;

    while(num != 0 ){
        count += (num & 1 == 1 ) ? 1 : 0;
        num = num >> 1;
    }
    return count; 
}

// brain kerning's algorithm  time is Q(no. of set bit )
int countBitSet2(int num ) {

    int count = 0;
    while( num > 0 ){
        num = num & (num - 1 );
        count++;
    }
    return count;
}

int main(){
    int num;
    cin >> num ;

    cout<<countBitSet1( num ) << endl;

    cout<<countBitSet2( num ) << endl;
    return 0;


}