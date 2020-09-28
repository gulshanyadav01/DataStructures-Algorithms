#include<iostream>
using namespace std;

// brian algo to count set bit in a num 

int countSetBit( int num ) {
    int count = 0;
    while(num > 0 ){
        num = num  & (num -1 );
        count++;
    }
    return count;

}

int totalCountBitSet(int num ) {
    int count = 0 ;
    for(int i =1; i<= num; i++ ) {
        count  += countSetBit(i);
    }
    return count;
}

int main(){
    int num;
    cin >> num;

    cout<<totalCountBitSet(num );
    return 0;
}