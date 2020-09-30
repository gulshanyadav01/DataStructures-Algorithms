#include<iostream>
using namespace std;
void insertion(int arr[], int num, int ind, int ele){
    int i = num;
    for(; i > ind; i++){
        arr[i] = arr[i-1];
    }
    arr[i] = ele;
    for(int j = 0; j < num; j++ ){
        cout << arr[j] << " ";
    }
}
int main(){
    int num;
    cin >> num ; 
    int arr[ num ];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    cout << " enter the number to inserted" << endl;
    int ele; 
    cin >> ele;
    cout << "enter the position to be inserted "<< endl;
    int ind;
    cin >> ind;
    insertion(arr, num, ind, ele);
    return 0;

}