#include <iostream>
using namespace std;
int fun(int num ){
    if(num == 1){
        return 0;
    }
    return 1 + fun(num / 2);
}
int main(){
    int num ;
    cin >> num ;
    cout<< fun( num ) <<endl;
    return 0;
}