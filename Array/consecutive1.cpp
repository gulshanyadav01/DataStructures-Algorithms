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
// second time but the time complexity still Q(N^2);
int cons(int arr[], int num){
    int res= 0;
    int i = 0;
    while(i< num){
        if(arr[i] == 1){
            int count =0;
            while(arr[i] ==1){
                count++;
                res = max(count, res);
                i++;
            }
        }
        i++;
    }
    return res;
}

int cons1(int arr[], int num){
    int res= 0;
    int count = 0;
    for(int i= 0; i< num; i++){
        if(arr[i] ==1 ) {
            count++;
            res = max(count,res);

        }
        else {
            count = 0;
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

    cout << cons1(arr, num);
    return 0;

}