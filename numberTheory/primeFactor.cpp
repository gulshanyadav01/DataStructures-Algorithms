#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num == 1){
        return false;
    }
    for(int i= 2; i*i <= num; i++){
        if(num% 2 ==0){
            return false;
        }
    }
    return true;
}
// this is taking Q(n^2 logn) time 
void  primeFactor(int num){
    for(int i= 2; i< num; i++){
        if(isPrime(i)){
            int  x = i;
            while(num% x ==0){
                cout << i << "\n";
                x *= i;
            }
        }
    }

    
}
// this is efficient solutin 
void primeFactor2(int num){
    if(num <= 1){
        return;
    }
    for(int i = 2; i*i <= num; i++){
        while( num% i == 0){
            cout << i << "\n";
            num /= i;
        }
    }
    if(num > 1){
        cout << num << "\n";
    
    }

}
int main(){
    int num;
    cin >> num;
    // primeFactor(num);
    primeFactor2(num);
    return 0;  

}