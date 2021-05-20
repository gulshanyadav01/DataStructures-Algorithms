/* 
author: gulshan yadav
date: 20-May-2021
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// super naive solution would be 

int repeatingElement1(int arr[], int num){
    for(int i = 0; i< num; i++){
        for(int j = i+1; j< num; j++){
            if(arr[i] == arr[j]) return arr[i];
        }
    }
}


// now naive solution 

int repeatingElement2(int arr[], int num){
    sort(arr, arr+num);
    for(int i = 0; i< num-1; i++){
        if(arr[i] == arr[i+1]) return arr[i]; 
    }
}

// efficient but not that efficient; 
int repeatingElement3(int arr[], int num){
    bool visited[num]= {false}; 
    for(int i = 0; i< num; i++){
        if(visited[arr[i]]){
            return arr[i];
        }
        visited[arr[i]] = true; 
    }

}

// more efficient solution 

int repeatingElement4(int arr[], int num){
    int slow = arr[0]+1; 
    int fast = arr[0]+1; 
    do{
        slow = arr[slow]+1; 
        fast = arr[arr[fast]]+1; 

    }while(slow!= fast); 
    slow = arr[0]; 
    while(slow!= fast){
        slow = arr[slow]+1; 
        fast = arr[fast]+1; 
    }
    return slow-1; 
}

int main(){
    int num; 
    cin >>  num;
    int arr[num]; 
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << repeatingElement1(arr,  num); 
    cout <<"\n"; 
    cout << repeatingElement2(arr, num); 
    cout << "\n"; 
    cout << repeatingElement3(arr, num); 
    cout << "\n"; 
    cout << repeatingElement4(arr, num); 
    return 0; 
}