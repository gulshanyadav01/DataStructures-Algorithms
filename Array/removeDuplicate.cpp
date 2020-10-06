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
// efficient solution 
void  removeDuplicates(int arr[], int num){
    arr[0] = arr[0];
    int temp =1;
    for(int i= 1; i< num; i++){
        if(arr[temp-1] != arr[i]){
            arr[temp] = arr[i];
            temp++;
        }
    }
    for(int i= 0; i< temp; i++){
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
    removeDuplicates(arr, num );
    return 0;

}

