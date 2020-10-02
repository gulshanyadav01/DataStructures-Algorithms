#include<iostream>
using namespace std;
int consective1(int arr[], int num ){
    int res = 0;
    for(int i = 0; i < num; i++){
        int curr = 0;
        for(int j = 0; j < num; j++){
            if(arr[j] == 1) curr++;

            else break;
        }
        res = max(res, curr);
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
    cout << consective1(arr, num );
    return 0;

}