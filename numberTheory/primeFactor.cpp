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
void  primeFactor(int num){
    for(int i= 2; i< num; i++){
        if(isPrime(i)){
            int  x = i;
            while(num% x ==0){
                cout << i << endl;
                x *= i;
            }
        }
    }

    
}
int main(){
    int num;
    cin >> num;
    primeFactor(num);
    return 0;  

}