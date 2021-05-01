/* 
author: gulshan yadav
date: 27-April-2021
*/
#include<iostream>
using namespace std;

int largest(int arr[], int num){
    int max = 0; 
    for(int i = 1; i< num; i++){
        if(arr[i] > arr[max]){
            max = i; 
        }
    }
    return max; 
}

int secondLargest(int arr[], int num){
    int lar = largest(arr, num); 
    int res = -1; 
    for(int i = 0; i< num; i++){
        if(arr[i] != arr[lar]){
            if(res == -1 ){
                res = i; 
            }
            else if(arr[res]< arr[i]){
                res = i;
            }
        }
    }
    return res; 

}

// this is the efficient solution of this problem 

int secondLargest2(int arr[], int num){
    int res = -1; 
    int lar = arr[0]; 
    for(int i = 1; i< num; i++){
        if(arr[i]  > lar){
            res = lar; 
            lar = arr[i]; 
        }
        else if(arr[i]!= lar){
            if(res == -1){
                lar = arr[i]; 
            }
            else if(arr[i]>res ){
                res = arr[i]; 
            }


        }
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
    cout << secondLargest2(arr, num)<<endl;
    return 0;
    
}