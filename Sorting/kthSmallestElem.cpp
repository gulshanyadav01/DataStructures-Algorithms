/* 
author: *gulshan yadav*
date: 19-oct-2020
*/
#include<iostream>
#include<algorithm>
using namespace std;


// this is naive solution 

int kthSmallElem(int arr[],int num, int k){
    // sort the array 
    sort(arr, arr+num);
    return arr[k-1];
}


// this is efficient solution but the
// worst time complexity of this algo is (n^2);
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
        else if (p < k-1){
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

    // cout << arr[kthSmallestElem(arr,num, k)];
    cout << kthSmallElem(arr, num , k );
    return 0;
}