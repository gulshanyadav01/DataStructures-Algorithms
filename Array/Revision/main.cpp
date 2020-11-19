
#include <iostream>
#include "removeDup.h"
#include "secondLar.h"
#include "leftRotate.h"
#include "moveZeroToEnd.h"
#include "leftRotateByDplaces.h"
#include "leader.h"
#include "maxDiff.h"
#include "freq.h"
#include "stock.h"
#include "rainWater.h"
#include "maxConsec1.h"
#include "maxSumArray.h"
#include "longestEvenOdd.h"
#include "circularSum.h"
#include "majorityElem.h"
#include "minFlip.h"
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
    // leftRotateByD(arr, num); 
    // leader(arr, num); 
    // cout << maxDiff(arr, num); 
    // freq(arr, num); 
    // cout << stockSell(arr, num);
    // cout << rainWater1(arr, num);
    // cout << rainWater2(arr, num);
    // cout << maxConsec1(arr, num); 
    // cout << maxConsec2(arr, num); 
    // cout << maxSumArray(arr, num); 
//    cout<<  maxSumArray2(arr, num); 
//    cout<< longestEvenOdd(arr, num); 
//    cout << circularSum(arr, num); 
// cout << majorityElem(arr, num);
// cout << majorityElem2(arr, num); 
minFlip(arr, num); 
    return 0;
}