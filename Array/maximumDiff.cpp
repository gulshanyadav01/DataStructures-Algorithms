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
// optimise solution 
void maxDiff(int arr[], int num ){
    int res = arr[1] - arr[0];
    int mi = arr[0];
    for(int i = 0;i < num; i++){
        res = max(res, arr[i]-mi);
        mi = min(arr[i], mi); 
    }
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