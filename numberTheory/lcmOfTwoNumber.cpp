#include<iostream>
using namespace std;
int lcm(int num1 , int num2){
    int res = max(num1 , num2);

    while(true){
        if( res%num1 == 0 && res%num2 ==0 ) break;
        res++;
    }
    return res;

}
int main(){
    int num1, num2; 
    cin >> num1 >> num2;
    cout << lcm(num1 , num2);
    return 0;
}