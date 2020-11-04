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
// efficient solutin Q(sqrt(n))

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
// mor e efficient solution 
bool isPrime3(int num){
    if(num == 1 ){
        return false;
    }
    if(num == 2 || num == 3 ) return true;
    if(num % 2 == 0 || num % 3 == 0) return false;
    for(int i = 5; i*i <= num; i++){
        if(num % i == 0 || num %(i+2) == 0) return false;
    }
    return true;
}
int main(){
    int num;
    cin >> num;
    // cout << isPrime(num);
    // cout << isPrime2(num);
    cout << isPrime3(num);
    return 0;
}