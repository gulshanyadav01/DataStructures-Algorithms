/* 
author: gulshan yadav
date: 04-May-2021
*/
#include<iostream>
using namespace std;

bool isSorted(int arr[], int num){
    for(int i = 0; i< num; i++){
        if(arr[i]> arr[i+1] ) return false;
    }
    return true; 

}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i]; 
    }
    cout << isSorted(arr, num); 
    return 0; 
}