#include<iostream>
#include<vector>
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
    vector<int> v;
    int curr_lead = arr[num-1];
    v.push_back(curr_lead);
    for(int i= num-2; i >= 0; i--){
        if(arr[i] > curr_lead){
            curr_lead = arr[i];
            v.push_back(arr[i]);
            // cout << arr[i] <<" ";
        }
    }
    for(int i = v.size()-1; i >= 0; i--){
        cout << v[i] << " ";
    }
}

void leaderInArr2(int arr[],int num){
    
    for(int i= 0; i< num; i++){
        bool flag = false;
        for(int j= i+1; j< num; j++){
            if(arr[j] >= arr[i]){
                flag = true;
                break;
            }
        }
        if(!flag) cout << arr[i] <<" ";
    }
}

int main(){
    int num;
    cin >> num;
    int arr[num ];
    for(int i= 0 ;i< num ;i++){
        cin >> arr[i];
    }
    // leaderInArray(arr, num );
    // leaderInArray2(arr, num);
    // leaderInArr(arr, num);
    leaderInArr(arr,num);
    return 0;

}