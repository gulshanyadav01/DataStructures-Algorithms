#include<iostream>
using namespace std;
int indexOfMaxEle (int arr[], int num){
    int i=0;
    int max = arr[0];
    for(int j = 1; j < num; j++){
        if(arr[j] > max) {
            i = j;
            max = arr[j];
        }
    }
    return i;
}

int main(){
    int num; 
    cin >> num;

    int arr[num]; 

    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << indexOfMaxEle(arr, num );
    return 0;
}