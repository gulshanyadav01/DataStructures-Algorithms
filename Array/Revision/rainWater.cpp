#include<iostream>
using namespace std;


int rainWater(int arr[], int num){
    int lmax[num] = arr[0]; 
    int rmax[num]; 
    for(int i = 0; i< num;i++){
        lmax[i] = max(lmax[i-1], arr[i]);
    }
    rmax  = arr[num-1]; 
    for(int i = num-1; i>= 0; i--){
        rmax[i]  = max(rmax[i+1], arr[i]);
    }
    for(int i = 1; i< num-1; i++){
        res += (min(lmax[i], rmax[i])-arr[i]);
    }
    return res; 
}

int main(){
    int num; 
    cin >> num; 
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << rainWater(arr, num);
    return 0;
}