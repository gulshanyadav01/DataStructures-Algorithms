#include<iostream>
using namespace std;

int stockBuyAndSell(int arr[], int num ){
    int profit = 0;

    for(int i = 1; i < num; i++){
        if(arr[i] > arr[i-1]){
            profit += arr[i]-arr[i-1];
        }
    }
    return profit;
}

int main(){
    int num;
    cin >> num;
    int arr[ num ];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    cout << stockBuyAndSell(arr, num ); 
    return 0;
}