#include <iostream>
using namespace std;
int sumOfDigit(int num ){
    if(num == 0){
        return 0;
    }
    return sumOfDigit(num/10 ) + num % 10;
}
int main (){

    int num; 
    cin >> num ;
    cout << sumOfDigit( num );
    return 0;

}