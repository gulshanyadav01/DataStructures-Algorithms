#include<iostream>
using namespace std; 

int area(int arr[], int num){
    int res = 0; 
    for(int i = 0; i < num; i++){
        int curr  = arr[i]; 
        for(int j = i-1; j >= 0; j--){
            if(arr[j]>= arr[i]){
                curr += arr[i];
            }
            else break;
        }
        for(int j = i+1; j< num; j++){
            if(arr[j]>= arr[i]){
                curr += arr[i];
            }
            else{ break;}
        }
        res = max(res, curr);
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
    cout << area(arr, num); 
    return 0; 
}