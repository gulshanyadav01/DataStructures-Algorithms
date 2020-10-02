#include<iostream>
using namespace std;
void  freqSortArr(int arr[], int num ){
    int freq = 1;
    for(int i = 1; i < num; i++){
        if((arr[i] == arr[i-1]) && (i < num) ) {
            freq++;

        }
        else{
            cout << arr[i-1] << " " << freq << endl;
            freq =1; 
        }
    }
}
int main(){
 int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    freqSortArr(arr, num );
}