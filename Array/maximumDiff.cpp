#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void maximumDiff(int arr[], int num ){
    int ma  = 0 ;
    for(int i = 0; i < num - 1 ; i++){
        
        for(int j = i+1; j < num; j++){
            ma = max(arr[j] -arr[i], ma);
        }
    }
    cout << ma << endl;
}
int main(){
     int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    maximumDiff(arr, num );


}