#include<iostream>
using namespace std;
int maxSumArray(int arr[], int num ){
    int res = arr[0];

    for(int i = 1; i < num; i++){
        int curr = 0;
        for(int j = i; j < num; j++){
            curr += arr[j];
            res = max(curr, res);
        }
    }
    return res;

}
// practice 
int maxSumArr(int arr[], int num){
    int res= 0;
    for(int i= 0; i< num; i++){
        int sum= 0;
        for(int j= i; j< num; j++){
            sum += arr[j];
            res = max(sum ,res);
            
        }
        
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
    // cout << maxSumArray(arr, num );
    cout << maxSumArr(arr, num);
    return 0;
}