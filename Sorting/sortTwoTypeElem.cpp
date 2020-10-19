/* 
author: *gulshan yadav*
date: 19-oct-2020
*/
#include<iostream>
#include<algorithm>
using namespace std;

void sortTwoTypeElem(int arr[], int num){
    int i = -1;
    int j= num; 
    while(true){
        do{i++;} while(arr[i]< 0);
        do{j--;} while(arr[j]>= 0);
        
        if(i>=j){
            return; 
        }
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }
}
int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i= 0; i< num; i++){
        cin >> arr[i];
    }

    sortTwoTypeElem(arr, num);
    for(int i= 0 ; i< num; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}