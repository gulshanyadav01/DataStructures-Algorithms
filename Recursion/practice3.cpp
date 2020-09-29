#include<iostream>
using namespace std;
void fun(int num ){
    if(num ==0){
        return;
    }
    fun( num/2 );
    cout << num % 2 << endl;

}
int main(){

    int num; 
    cin >> num ;
    fun( num );
    return 0;

}