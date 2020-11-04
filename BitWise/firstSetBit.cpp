#include<iostream>
using namespace std;

int firstSetBit(int num){

    int sum = 0;
    int count = 0; 
    
    while(num > 0){
        count++;
        if(num%2 == 1 ){
            sum = count;
            break;
        }
        num /= 2;
    }
    return sum;
}
int main(){
    int num;
    cin >> num;
    cout << firstSetBit( num );
    return 0;

}