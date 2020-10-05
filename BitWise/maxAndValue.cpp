#include<iostream>
using namespace std;
int maxAndValue(int arr[], int num){
    int res= 0;
    for(int i = 0; i < num-1; i++){
        // int count  = 0;
        for(int j =i+1; j < num; j++){
            res = max((arr[i] & arr[j]),res);
        }
    }
    return res;
}
int main(){
    int num;
    cin >> num;
    int arr[num];
    for(int i= 0; i< num; i++){
        cin>>arr[i];
    }
    cout << maxAndValue(arr, num);
    return 0;
}