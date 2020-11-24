/* 
author: "gulshan yadav"
date: 25-NOV-2020
*/
#include<iostream>
using namespace std;

bool pairSum(int arr[], int num, int key){
    int low = 0; 
    int high = num-1; 
    while(low< high){
        if((arr[low] + arr[high]) == key){
            return true;
        }
        else if (arr[low]+ arr[high]< key){
            low++; 
        }
        else{
            high--; 
        }
    }
    return false;

}
int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    int key; 
    cin >> key; 
    cout << pairSum(arr, num, key); 
    return 0; 
}