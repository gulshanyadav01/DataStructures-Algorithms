#include <iostream>
using namespace std;

int findMissingNumber (int arr[] , int num  ) {
    int res = 0;

    for(int i = 1; i <= num + 1; i++){
        res ^= i;
    }
    for(int i = 0; i< num; i++){
        res ^= arr[i];
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
    
    cout<<findMissingNumber(arr, num )<< endl;
    return 0;

}
