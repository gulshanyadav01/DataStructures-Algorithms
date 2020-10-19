/* 
author: *gulshan yadav*
date: 19-oct-2020
*/
#include<iostream>
#include<algorithm>
using namespace std;

int partition(int arr[], int low,  int high){
    int i= low-1; 
    int pivot = arr[high];

    for(int j=0; j<= high-1; j++){
        if(arr[j]< pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp; 
    return i+1;
}

int kthSmallestElem(int arr[], int num, int k ){

    int low = 0; 
    int high = num-1; 

    while(low<= high){
        int p = partition(arr, low, high);
        if(p== k-1){
            return p;
        }
        else if (p< k-1){
            low = p+ 1; 
        }
        else {
            high = p-1; 
        }
    }
    return -1;

}
int main(){
    int num, k; 
    cin >> num >> k;
    int arr[num];

    for(int i= 0; i< num; i++){
        cin >> arr[i];
    }

    cout << kthSmallestElem(arr, 0, num);
    return 0;
}