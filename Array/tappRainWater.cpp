#include<iostream>
using namespace std;
int tappRainWater(int arr[],int num){
    int res = 0;
    for(int i= 1; i< num-1; i++){
        int lmax= arr[i];
        for(int j= 0; j< i; j++){
            lmax = max(lmax, arr[j]);
        }
        int rmax= arr[i];
        for(int j= i+1; j< num; j++){
            rmax = max(rmax, arr[j]);
        }
        res += min(rmax,lmax) - arr[i];
    }
    return res;
}
int main(){
        int num;
    cin >> num;
    int arr[ num ];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    cout<< tappRainWater(arr, num);
    return 0;
}