
#include<iostream>
#include "removeDup.h"
#include "secondLar.h"
using namespace std;



int main() {
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << secondLargest(arr, num); 
    //  removeDup(arr, num); 
    return 0;
}