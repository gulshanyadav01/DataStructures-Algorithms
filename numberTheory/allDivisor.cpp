#include<iostream>
using namespace std;
void print(){
    cout<<"hello"<<endl;
}
void printAllDivisor2(int num){
    for(int i = 1; i*i<= num; i++){
        if(num% i == 0){
             cout << i << " ";
             if(i != num%i){
                 cout << num/i << " ";

             }
        }

    }
}






// this is efficient solution 
void printAllDivisor(int n ) {
    // theta(sqrt(n)) time complexity
    for(int i= 1; i*i <= n; i++) {

        if(n% i == 0 ){
            cout<< i <<" ";
            if(i!= n/i){
                cout<< n/i << " ";
            }
        }
    
    }
}
int main(){
    int n; 
    cin>> n;
    // printAllDivisor( n );
    printAllDivisor2(n);

}