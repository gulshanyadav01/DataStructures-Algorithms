#include<iostream>
using namespace std;

// naive solution time is Q(total bit like 64 or 32);
bool powerOfTwo1( int num ) {
    if(num == 0 ){
        return false;
    }

    while(num  != 1 ){
        if(num %2){
            return false;
        }
        num /= 2;

    }
    return true;

}
// with the help of brain's algorithms  time Q(total no. of set bit)

bool powerOfTwo2 ( int num ) {
    if( num == 0 ){
        return false;
    }
    return ((num & (num -1 )) == 0) ;

}

int main(){
    int num; 
    cin >> num; 
    // cout << powerOfTwo1( num ) << endl;

    cout<<powerOfTwo2 ( num ) << endl;

    return 0;
}