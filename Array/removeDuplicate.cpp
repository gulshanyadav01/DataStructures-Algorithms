#include<iostream>
using namespace std;
void removeDuplicate2(int arr[], int num ){
    int res = 1;
    for(int i = 0; i <  num; i++){
        if(arr[i] != arr[res-1]){
            arr[res]  = arr[i];
            res++;
        }
    }
    for(int i = 0; i < res; i++){
        cout << arr[i] << " ";
    }
}
// void removeDuplicate(int arr[], int num ){
//     int temp[num];
//     int j = 1;
//     temp[0] = arr[0];
//     for(int i = 1; i < num; i++){
//         if(temp[res] != arr[i]){
//             temp[j++] = arr[i];
//         }
//     }
//     for (int i = 0; i < j; i++){
//         cout<< temp[i];
//     }
// }
int main(){
    int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    removeDuplicate2(arr, num );
    return 0;

}

