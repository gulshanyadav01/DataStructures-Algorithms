#include<iostream>
using namespace std ;

void stockSpan(int arr[], int num){
    for(int i  = 0; i< num; i++){
        int span = 1; 
        for(int j = i-1; j>= 0  && arr[j]<= arr[i]; j--){
            span++;
        }
        cout << span << " ";
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    stockSpan(arr, num); 
    return 0; 
}