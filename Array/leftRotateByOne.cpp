#include<iostream>
using namespace std;
void  leftRotateByOne(int arr[], int num ){
    int temp = arr[0];
    for(int i = 0; i < num-1; i++){
        arr[i] = arr[i+1];
    }
    arr[num-1] = temp;

    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }

}
int main(){
 int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    leftRotateByOne(arr, num );
}