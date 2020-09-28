#include<iostream>
using namespace std;

// naive solution 
int powerOfNumber(int x, int n ){

    int res =1;
    for(int i = 0; i< n; i++){
        res *= x;
    }
    return res;
}

// efficient solution 

int power(int x, int n){
    if(n==0){
        return 1;
    }
    return power(x, n-1) * x;

}


int main(){
    int x, n;
    cin>>x>>n;
    // cout<<powerOfNumber(x, n);
    cout<<power(x, n );
    return 0;
}