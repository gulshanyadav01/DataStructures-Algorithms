#include<iostream>
using namespace std;
void deletion(int arr[], int num, int ele ) {
    int i = 0;
    for(; i< num; i++){
        if(arr[i] == ele){
            break;
        }
        
    }
    if(i == num ){
            cout << "element is not found at all" << endl;
            return;
            
    }
    else{
        for(int j= i; j < num; j++){
        arr[j] = arr[j+1];
    }

    for(int j=0; j< num-1; j++){
        cout << arr[j] << " ";
    }


    }
    

}
int main(){

    int num;
    cin >> num ; 
    int arr[ num ];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    cout << " enter the number to deleted" << endl;
    int ele; 
    cin >> ele;
    deletion(arr, num ,ele);
    return 0;


}