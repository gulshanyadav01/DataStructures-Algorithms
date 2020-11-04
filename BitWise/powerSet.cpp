#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void powerSet( string input){
    int n = input.length();
    int powerSize = pow(2 , n );

    for(int i = 0; i< powerSize; i++){

        for(int j = 0; j < n; j++){
            if((i & (1 << j)) != 0 ){
                cout << input[j] << "";
            }
        
        }
        cout << endl;
    }
}
int main(){
    string input ;
    cin >> input ; 
    powerSet (input );
    return 0;

}