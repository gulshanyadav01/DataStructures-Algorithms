#include<iostream>
using namespace std;
int gcdOfTwoNumberNaive(int num1 , int num2){
    int res= min(num1, num2);

    while(res > 0){
        if((num1 % res == 0) && (num2 % res == 0)) break; 
        res--;
    }
    return res;
}
int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    cout << gcdOfTwoNumberNaive(num1 , num2 );
    return 0;

}