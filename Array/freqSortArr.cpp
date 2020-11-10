#include<iostream>
using namespace std;
void  freqSortArr(int arr[], int num ){
    int freq = 1;
    for(int i = 1; i < num; i++){
        if((arr[i] == arr[i-1]) && (i <= num) ) {
            freq++;

        }
        else{
            cout << arr[i-1] << " " << freq << endl;
            freq = 1; 
        }
    }
}
// efficient solution 
void freq(int arr[], int num){
    int temp = arr[0];
    int count = 1;
    for(int i =1; i< num ; i++){
        if((temp == arr[i]) && (i < num)){
            count++;
            // temp = arr[i];
        }
        else {
            temp = arr[i];
            cout << arr[i-1] << " "<< count << " ";
            count = 1;
        }
    }


}
int main(){
 int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i<num ;i++){
        cin >> arr[i];
    }
    freqSortArr(arr, num );
    freq(arr, num);
    return 0;
}