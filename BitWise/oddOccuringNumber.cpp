#include<iostream>
using namespace std;
// time complexty is big-O (n*n);
int findOddOccuring1( int arr[], int num ) {

    for(int i= 0; i< num; i++){

        int count =0;
        for(int j= 0; j< num; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count%2 != 0 ){
            return arr[i];
        }
    }
}

// efficient solution 
int findMissingNumber2(int arr[], int num ) {
    int res = 0 ;
    for(int i = 0; i < num; i++){
        res ^= arr[i];
    }
    return res;
}

int main(){
    int num;
    cin >> num; 
    int arr[ num ];
    for (int i= 0; i< num; i++){
        cin>> arr[i];
    }
    // cout << findOddOccuring1(arr, num);

    cout << findMissingNumber2(arr, num);
    return 0;


}