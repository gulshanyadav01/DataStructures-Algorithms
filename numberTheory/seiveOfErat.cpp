#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num == 1){
        return false;
    }
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            return false;
        }
        
    }
    return true;
}

void printAllPrimeNumber1ToN(int num){
    for(int i= 1; i <= num; i++ ){
        if(isPrime(i)) cout << i << " ";
    }
}
// seive of eratosthenes 

void seive(int num){
    int arr[num+1] ={0};
    for(int i = 2; i*i <= num; i++){
        if(!arr[i]){
            for(int i = 2*i; i <= num; i = i+i){
                arr[i] = 1;
            }
        }
    }
    for(int i = 2; i <= num; i++){
        if(!arr[i]){
            cout << arr[i] << " ";
        }
    }
}
int main(){
    int num;
    cin >> num;
    // printAllPrimeNumber1ToN(num);
    seive(num);
    return 0;
}