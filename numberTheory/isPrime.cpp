#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num == 1){
        return false;
    }
    for(int i = 2; i < num; i++){
        if(num % i == 0) return false;
    }
    return true;
}
// efficient solutin 
bool isPrime2(int num){
    if(num ==1 ){
        return false;
    }
    for(int i = 2; i*i < num; i++){
        if(num %i == 0){
            return false;
        }
    }
    return true;
} 
int main(){
    int num;
    cin >> num;
    // cout << isPrime(num);
    cout << isPrime2(num);
    return 0;
}