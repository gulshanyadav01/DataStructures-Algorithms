#include<iostream>
using namespace std;
int maxLen(int arr[], int num){
    // int count = 0;
    int res = 1;
     int count = 1;
    for(int i= 0; i< num; i++){
       
        if((arr[i]% 2 == 0 ) && (arr[i+1]%2 != 0 ) ||(arr[i]% 2 != 0) && (arr[i+1]%2 == 0) ){
            count++;
        }
        else {
            count = 1;
        }
        res =  max(count, res);
    }
    
}
int main(){
    int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    cout << maxLen(arr, num);
    return 0;

}