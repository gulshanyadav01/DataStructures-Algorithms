#include<iostream>
using namespace std;
int rightMostDiffBit (int num1, int num2  ){

    int a = max(num1 , num2 );
    int res = 0;
    int count = 0;
    while(a> 0 ){
        count++;
        if( num1%2 != num2%2 ){
            res = count;
            break;
        }
        num1 /= 2;
        num2 /= 2;
        a /= 2;
        
    }


}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout<< rightMostDiffBit( num1 , num2 );
    return 0;
}