#include<iostream>
using namespace std;

int findOddOccuring( int arr[], int num ) {

    for(int i= 0; i< num; i++){

        int count =0;
        for(int j= 0; j< num; i++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count%2 != 0 ){
            return arr[i];
        }
    }
}

int main(){
    int num;
    cin >> num; 
    int arr[ num ];
    for (int i= 0; i< num; i++){
        cin>> arr[i];
    }


}