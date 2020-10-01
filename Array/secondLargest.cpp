#include<iostream>
using namespace std; 
int secondlargest(int arr[]  , int num ){
    int lar = 0, max = arr[0];
    for(int i= 0; i < num; i++){
        if(arr[i] > max){
            lar = i;
        }
    }
    int res = -1;

    for(int i = 0; i < num; i++){
        if(arr[i] != arr[lar]){
            
            if(res == -1 ){
                res = i;
            }
            else if (arr[i] > arr[res]){
                res = i;
            }
        }
    }
    return res;
}
int main(){
   int num;
    cin >> num;
    int arr[ num ];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    cout<< secondlargest(arr, num);
    return 0;
}