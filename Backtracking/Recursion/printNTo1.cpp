#include<iostream>
using namespace std;

void printNTo1(int num ){

    if( num == 0 ){
        return ;
    }
    cout << num << " ";
    printNTo1( num - 1 );

}
int main(){
    int num ; 
    cin >> num;
    printNTo1( num );
    return 0;

}