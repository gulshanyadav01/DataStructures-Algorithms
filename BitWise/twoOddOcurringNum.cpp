#include<iostream>
using namespace std;
int twoOddOccuring(int arr[], int num ) {
    
     int res  = 0;
     int res1 = 0;
     int res2 = 0;
    for(int i = 0 ; i < num ; i++){

        res ^= arr[i];
    }

    int setBit = res & (~(res-1));

    for(int i = 0; i< num; i++){
        if((arr[i] & setBit) != 0){
            res1 ^= arr[i];
        }
        else{
            res2 ^= arr[i];
        }
    }
    cout <<  res1 <<" " << res2 << endl;


}
int main(){
    int num ;
    
    cin >> num ;
    int arr[num];
    for(int i = 0; i< num; i++) {
        cin >> arr[i];
    }
    twoOddOccuring(arr, num);



}