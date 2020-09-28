#include<iostream>
using namespace std;
int gcdOfTwoNumber(int a, int b){
    if( b==0 ){
        return a;
    }
    return gcdOfTwoNumber(b , a%b);
}
int main(){
    int a,b;
    cin>>a>>b;

    cout<<gcdOfTwoNumber(a, b); 


}