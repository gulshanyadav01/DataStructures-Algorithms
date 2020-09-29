#include<iostream>
using namespace std;

void fun(int num ){
    if(num ==0){
        return;
    }

    fun(num -1);
    cout << num << endl;
    fun( num -1);
    
    
}
int main(){
    int num; 
    cin >> num ;
    fun(num );
    return 0;
}