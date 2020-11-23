
/*
author : gulshan yadav
date : 23-NOV-2020
*/


#include<iostream>
using namespace std;

void printNBonnacci( int n, int m){
    int arr[m]; 
    for(int i = 0; i< n-1; i++){
        arr[i] = 0;
    }
    arr[n-1] =1; 
    int sum = arr[n-1]; 
    for(int i = n; i< m; i++){
         
        arr[i] = sum; 
        sum  += sum- arr[i-n];
    
    }
    for(int i = 0; i< m; i++){
        cout << arr[i] << " "; 
    }

}

int main(){
    int n,m; 
    cin >> n >> m; 
    printNBonnacci(n, m); 
    return 0;
}