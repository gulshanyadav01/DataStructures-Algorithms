#include<iostream>
using namespace std;


// time complexity is Q(N);
void reverseArray(int arr[], int num ){
    int i = 0;
    int j = num - 1;
    while(i< j){
        int temp  = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i = 0; i < num; i++ ){
        cout << arr[i]<<" ";
    }

}
int main(){
    int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    reverseArray(arr, num );

}