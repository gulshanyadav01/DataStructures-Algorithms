#include <iostream>
using namespace std; 

bool isSparse(int num ){
    int flag = 0;
    bool b = true;
    while(num > 0){

        if(num% 2 == 1 && flag == 1 ){
             return false;
        }
        flag = num % 2 ;
        num /= 2;
    }
    return b;
}
int main(){
    int num;
    cin >> num;
    cout<< isSparse(num )<<endl;
    return 0;

}