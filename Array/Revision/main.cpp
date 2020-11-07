
#include<iostream>
#include "removeDup.h"
#include "secondLar.h"
#include "leftRotate.h"
#include "moveZeroToEnd.h"
#include "leftRotateByDplaces.h"
using namespace std;



int main() {
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    // cout << secondLargest(arr, num); 
    //  removeDup(arr, num); 
    // moveZeroToEnd(arr, num); 
    // leftRotate(arr, num); 
    leftRotateByD(arr, num); 
    return 0;
}