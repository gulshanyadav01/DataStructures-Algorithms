#include<iostream>
using namespace std;
int bitDifference(int num1 , int num2) {
    int count = 0;
    int a = max(num1 , num2 );
    while(a > 0){
        if(num1 %2 != num2 %2 ){
            count++;
        }
        num1 /= 2 ;
        num2 /= 2;
        a /= 2;
    }
    return count;
}
int main(){

    int num1, num2 ;
    cin >> num1 >> num2 ;
    cout << bitDifference (num1 , num2 );
    return 0;

}