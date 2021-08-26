#include<iostream>
using namespace std;
int countOfDigit(int num ){
    if( num == 0 ){
        return 0;
    }
    return 1 + countOfDigit ( num / 10);
}
int main(){
    int num; 
    cin >> num;

    cout<< countOfDigit ( num ) << endl;
    return 0;

}