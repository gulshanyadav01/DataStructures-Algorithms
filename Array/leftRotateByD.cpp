#include<iostream>
using namespace std;
void  leftRotateByOne(int arr[], int num ){
    int temp = arr[0];
    for(int i = 0; i < num-1; i++){
        arr[i] = arr[i+1];
    }
    arr[num-1] = temp;

    

}
void leftRotateByD(int arr[], int num , int d ){
    for(int i = 0; i < d; i++){
        leftRotateByOne(arr, num );
    }
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
    cout<< " enter the number time to rotate" << endl;
    int d;
    cin >> d; 
    leftRotateByD(arr, num , d);
}