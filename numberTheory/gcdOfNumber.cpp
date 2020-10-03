#include<iostream>
using namespace std;
// time complexity Q(min(num1 , num2 ));
int gcdOfTwoNumberNaive(int num1 , int num2){
    int res= min(num1, num2);

    while(res > 0){
        if((num1 % res == 0) && (num2 % res == 0)) break; 
        res--;
    }
    return res;
}
// euclidean algo 

int gcdOfTwoNumberEuc(int num1 , int num2 ){

    while(num1 != num2){
        if( num1 > num2){
            num1 = num1 - num2 ;
        }
        else {
            num2 = num2 - num1;
        }
    }
    return num1; 

}
int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    // cout << gcdOfTwoNumberNaive(num1 , num2 );
    cout << gcdOfTwoNumberEuc(num1 , num2 );
    return 0;

}