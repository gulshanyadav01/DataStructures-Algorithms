#include<iostream>
using namespace std;
int naturalSum (int num ){
    if(num ==0 ){
        return 0;
    }
    return num + naturalSum(num -1 );
}
int main(){
    int num; 
    cin >> num ;
    cout<< naturalSum( num );
    return 0;

}