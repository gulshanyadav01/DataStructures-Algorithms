#include<iostream>
using namespace std;
// naive solution time Q(N^2)

int maxLenNaive(int arr[],int num){
    int res = 1;
    for(int i= 0; i< num; i++){
        int count = 1; 
        for(int j= i+1; j< num; j++){
            if((arr[j]% 2 == 0 ) && (arr[j-1]%2 != 0 ) ||(arr[j]% 2 != 0) && (arr[j-1]%2 == 0)){
                count++;
            }
            else{
                break;
            }
        }
        res = max(count,res);
    }
    return res;
}



int maxLen(int arr[], int num){
    // int count = 0;
    int res = 1;
     int count = 1;
    for(int i= 1; i< num; i++){

        if((arr[i]% 2 == 0 ) && (arr[i-1]%2 != 0 ) ||(arr[i]% 2 != 0) && (arr[i-1]%2 == 0)){
            count++;
            
        }
        else {
            count = 1;
        }
        res =  max(count, res);
       
    }
    return res;
    
}
int main(){
    int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    // cout << maxLen(arr, num);
    cout << maxLenNaive(arr, num);
    return 0;

}