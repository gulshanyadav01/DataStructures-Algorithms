#include<iostream>
#include<vector>
using namespace std;
int linearSearch(int arr[], int num, int k){
    for(int i= 0; i< num ; i++){
        if(arr[i] == k ){
            return i;
        }
    }
    return -1;
}
int main(){
    int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    int k ;
    cin >> k;
    cout << linearSearch(arr, num, k);


}