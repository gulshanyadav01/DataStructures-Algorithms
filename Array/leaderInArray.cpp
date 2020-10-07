#include<iostream>
using namespace std;
// this has time complexity Q(N^2);
void leaderInArray (int arr[], int num){
    for(int i = 0; i < num; i++){
        bool flag = false;
        for(int j = i + 1; j < num; j++){
            if(arr[i] <= arr[j]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            cout << arr[i] << " ";
        }
    }

}
// this have Q(n) time complexity;
void leaderInArray2(int arr[], int num ){
    int currLead = arr[num-1];
    cout << currLead << " ";
    for(int i = num -2; i >= 0; i--){
        if(currLead < arr[i]) {
            currLead = arr[i]; 
            
            cout << currLead <<" ";
        }
        
}
}
// revision 
void leaderInArr(int arr[],int num){
    int curr_lead = arr[num-1];
    cout << curr_lead << " ";
    for(int i= num-2; i >= 0; i--){
        if(arr[i] > curr_lead){
            curr_lead = arr[i];
            cout << arr[i] <<" ";
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
    // leaderInArray(arr, num );
    // leaderInArray2(arr, num);
    leaderInArr(arr, num);
    return 0;

}